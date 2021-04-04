import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
  public static int calculateGain(int a, int b, int x) {
    return 2*a*x + a + b;
  }
//2 3 -1 5 -2 10
	public static void main(String[] args) throws IOException {
		Reader in = new Reader(System.in);
    int n = in.nextInt();
    int B = in.nextInt();
    int totalProfit = 0, coinsSpent = 0;
    int a[] = new int[n];
    int b[] = new int[n];
    for (int i = 0; i < n; i++) {
      a[i]=in.nextInt();
      b[i]=in.nextInt();
    }
    PriorityQueue profit = new PriorityQueue<Stock>(new StockComparator());
    for (int i = 0; i < n; i++) {
      int val = (int) calculateGain(a[i], b[i], 0);
      if (val > 0) {
        profit.add(new Stock(i, val, 0));
      }
    }
    while(true){
      if (coinsSpent >= B || profit.isEmpty()) break;
      Stock top = (Stock) profit.poll();
      totalProfit += top.addAmt;
      int index = top.index;
      top.investedAmt++;
      coinsSpent++;
      int addAmt = (int) calculateGain(a[index], b[index], top.investedAmt);
      if (addAmt > 0) {
        top.addAmt = addAmt;
        profit.add(top);
      }
    }
    System.out.println(totalProfit);
	}
}

class StockComparator implements Comparator<Stock> {
  public int compare(Stock s1, Stock s2) {
    return - s1.addAmt + s2.addAmt;
  }
}

class Stock {
  public int index;
  public int addAmt;
  public int investedAmt;

  Stock(int i, int a, int amt) {
    this.index = i;
    this.addAmt = a;
    this.investedAmt = amt;
  }
}

class Reader {
	static BufferedReader reader;
	static StringTokenizer tokenizer;

	Reader(InputStream input) {
		reader = new BufferedReader(new InputStreamReader(input));
		tokenizer = new StringTokenizer("");
	}

	static String next() throws IOException {
		while (!tokenizer.hasMoreTokens()) {
			tokenizer = new StringTokenizer(reader.readLine());
		}
		return tokenizer.nextToken();
	}

	static int nextInt() throws IOException {
		return Integer.parseInt(next());
	}

	static double nextDouble() throws IOException {
		return Double.parseDouble(next());
	}

	static long nextLong() throws IOException {
		return Long.parseLong(next());
	}
}

