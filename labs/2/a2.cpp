#include <iostream>

using namespace std;

int main() {
  int t, a, b, s;
  cin >> t;


  int ans[1001];
  for (int i = 0; i < 1001; i++) ans[i] = -1;
  ans[0] = 0;
  ans[2] = 1;
  ans[5] = 3;
  ans[7] = 4;
  ans[10] = 6;
  ans[13] = 8;
  ans[15] = 9;
  ans[18] = 11;
  ans[20] = 12;
  ans[23] = 14;
  ans[26] = 16;
  ans[28] = 17;
  ans[31] = 19;
  ans[34] = 21;
  ans[36] = 22;
  ans[39] = 24;
  ans[41] = 25;
  ans[44] = 27;
  ans[47] = 29;
  ans[49] = 30;
  ans[52] = 32;
  ans[54] = 33;
  ans[57] = 35;
  ans[60] = 37;
  ans[62] = 38;
  ans[65] = 40;
  ans[68] = 42;
  ans[70] = 43;
  ans[73] = 45;
  ans[75] = 46;
  ans[78] = 48;
  ans[81] = 50;
  ans[83] = 51;
  ans[86] = 53;
  ans[89] = 55;
  ans[91] = 56;
  ans[94] = 58;
  ans[96] = 59;
  ans[99] = 61;
  ans[102] = 63;
  ans[104] = 64;
  ans[107] = 66;
  ans[109] = 67;
  ans[112] = 69;
  ans[115] = 71;
  ans[117] = 72;
  ans[120] = 74;
  ans[123] = 76;
  ans[125] = 77;
  ans[128] = 79;
  ans[130] = 80;
  ans[133] = 82;
  ans[136] = 84;
  ans[138] = 85;
  ans[141] = 87;
  ans[143] = 88;
  ans[146] = 90;
  ans[149] = 92;
  ans[151] = 93;
  ans[154] = 95;
  ans[157] = 97;
  ans[159] = 98;
  ans[162] = 100;
  ans[164] = 101;
  ans[167] = 103;
  ans[170] = 105;
  ans[172] = 106;
  ans[175] = 108;
  ans[178] = 110;
  ans[180] = 111;
  ans[183] = 113;
  ans[185] = 114;
  ans[188] = 116;
  ans[191] = 118;
  ans[193] = 119;
  ans[196] = 121;
  ans[198] = 122;
  ans[201] = 124;
  ans[204] = 126;
  ans[206] = 127;
  ans[209] = 129;
  ans[212] = 131;
  ans[214] = 132;
  ans[217] = 134;
  ans[219] = 135;
  ans[222] = 137;
  ans[225] = 139;
  ans[227] = 140;
  ans[230] = 142;
  ans[233] = 144;
  ans[235] = 145;
  ans[238] = 147;
  ans[240] = 148;
  ans[243] = 150;
  ans[246] = 152;
  ans[248] = 153;
  ans[251] = 155;
  ans[253] = 156;
  ans[256] = 158;
  ans[259] = 160;
  ans[261] = 161;
  ans[264] = 163;
  ans[267] = 165;
  ans[269] = 166;
  ans[272] = 168;
  ans[274] = 169;
  ans[277] = 171;
  ans[280] = 173;
  ans[282] = 174;
  ans[285] = 176;
  ans[287] = 177;
  ans[290] = 179;
  ans[293] = 181;
  ans[295] = 182;
  ans[298] = 184;
  ans[301] = 186;
  ans[303] = 187;
  ans[306] = 189;
  ans[308] = 190;
  ans[311] = 192;
  ans[314] = 194;
  ans[316] = 195;
  ans[319] = 197;
  ans[322] = 199;
  ans[324] = 200;
  ans[327] = 202;
  ans[329] = 203;
  ans[332] = 205;
  ans[335] = 207;
  ans[337] = 208;
  ans[340] = 210;
  ans[342] = 211;
  ans[345] = 213;
  ans[348] = 215;
  ans[350] = 216;
  ans[353] = 218;
  ans[356] = 220;
  ans[358] = 221;
  ans[361] = 223;
  ans[363] = 224;
  ans[366] = 226;
  ans[369] = 228;
  ans[371] = 229;
  ans[374] = 231;
  ans[376] = 232;
  ans[379] = 234;
  ans[382] = 236;
  ans[384] = 237;
  ans[387] = 239;
  ans[390] = 241;
  ans[392] = 242;
  ans[395] = 244;
  ans[397] = 245;
  ans[400] = 247;
  ans[403] = 249;
  ans[405] = 250;
  ans[408] = 252;
  ans[411] = 254;
  ans[413] = 255;
  ans[416] = 257;
  ans[418] = 258;
  ans[421] = 260;
  ans[424] = 262;
  ans[426] = 263;
  ans[429] = 265;
  ans[431] = 266;
  ans[434] = 268;
  ans[437] = 270;
  ans[439] = 271;
  ans[442] = 273;
  ans[445] = 275;
  ans[447] = 276;
  ans[450] = 278;
  ans[452] = 279;
  ans[455] = 281;
  ans[458] = 283;
  ans[460] = 284;
  ans[463] = 286;
  ans[466] = 288;
  ans[468] = 289;
  ans[471] = 291;
  ans[473] = 292;
  ans[476] = 294;
  ans[479] = 296;
  ans[481] = 297;
  ans[484] = 299;
  ans[486] = 300;
  ans[489] = 302;
  ans[492] = 304;
  ans[494] = 305;
  ans[497] = 307;
  ans[500] = 309;
  ans[502] = 310;
  ans[505] = 312;
  ans[507] = 313;
  ans[510] = 315;
  ans[513] = 317;
  ans[515] = 318;
  ans[518] = 320;
  ans[520] = 321;
  ans[523] = 323;
  ans[526] = 325;
  ans[528] = 326;
  ans[531] = 328;
  ans[534] = 330;
  ans[536] = 331;
  ans[539] = 333;
  ans[541] = 334;
  ans[544] = 336;
  ans[547] = 338;
  ans[549] = 339;
  ans[552] = 341;
  ans[555] = 343;
  ans[557] = 344;
  ans[560] = 346;
  ans[562] = 347;
  ans[565] = 349;
  ans[568] = 351;
  ans[570] = 352;
  ans[573] = 354;
  ans[575] = 355;
  ans[578] = 357;
  ans[581] = 359;
  ans[583] = 360;
  ans[586] = 362;
  ans[589] = 364;
  ans[591] = 365;
  ans[594] = 367;
  ans[596] = 368;
  ans[599] = 370;
  ans[602] = 372;
  ans[604] = 373;
  ans[607] = 375;
  ans[610] = 377;
  ans[612] = 378;
  ans[615] = 380;
  ans[617] = 381;
  ans[620] = 383;
  ans[623] = 385;
  ans[625] = 386;
  ans[628] = 388;
  ans[630] = 389;
  ans[633] = 391;
  ans[636] = 393;
  ans[638] = 394;
  ans[641] = 396;
  ans[644] = 398;
  ans[646] = 399;
  ans[649] = 401;
  ans[651] = 402;
  ans[654] = 404;
  ans[657] = 406;
  ans[659] = 407;
  ans[662] = 409;
  ans[664] = 410;
  ans[667] = 412;
  ans[670] = 414;
  ans[672] = 415;
  ans[675] = 417;
  ans[678] = 419;
  ans[680] = 420;
  ans[683] = 422;
  ans[685] = 423;
  ans[688] = 425;
  ans[691] = 427;
  ans[693] = 428;
  ans[696] = 430;
  ans[699] = 432;
  ans[701] = 433;
  ans[704] = 435;
  ans[706] = 436;
  ans[709] = 438;
  ans[712] = 440;
  ans[714] = 441;
  ans[717] = 443;
  ans[719] = 444;
  ans[722] = 446;
  ans[725] = 448;
  ans[727] = 449;
  ans[730] = 451;
  ans[733] = 453;
  ans[735] = 454;
  ans[738] = 456;
  ans[740] = 457;
  ans[743] = 459;
  ans[746] = 461;
  ans[748] = 462;
  ans[751] = 464;
  ans[753] = 465;
  ans[756] = 467;
  ans[759] = 469;
  ans[761] = 470;
  ans[764] = 472;
  ans[767] = 474;
  ans[769] = 475;
  ans[772] = 477;
  ans[774] = 478;
  ans[777] = 480;
  ans[780] = 482;
  ans[782] = 483;
  ans[785] = 485;
  ans[788] = 487;
  ans[790] = 488;
  ans[793] = 490;
  ans[795] = 491;
  ans[798] = 493;
  ans[801] = 495;
  ans[803] = 496;
  ans[806] = 498;
  ans[808] = 499;
  ans[811] = 501;
  ans[814] = 503;
  ans[816] = 504;
  ans[819] = 506;
  ans[822] = 508;
  ans[824] = 509;
  ans[827] = 511;
  ans[829] = 512;
  ans[832] = 514;
  ans[835] = 516;
  ans[837] = 517;
  ans[840] = 519;
  ans[843] = 521;
  ans[845] = 522;
  ans[848] = 524;
  ans[850] = 525;
  ans[853] = 527;
  ans[856] = 529;
  ans[858] = 530;
  ans[861] = 532;
  ans[863] = 533;
  ans[866] = 535;
  ans[869] = 537;
  ans[871] = 538;
  ans[874] = 540;
  ans[877] = 542;
  ans[879] = 543;
  ans[882] = 545;
  ans[884] = 546;
  ans[887] = 548;
  ans[890] = 550;
  ans[892] = 551;
  ans[895] = 553;
  ans[897] = 554;
  ans[900] = 556;
  ans[903] = 558;
  ans[905] = 559;
  ans[908] = 561;
  ans[911] = 563;
  ans[913] = 564;
  ans[916] = 566;
  ans[918] = 567;
  ans[921] = 569;
  ans[924] = 571;
  ans[926] = 572;
  ans[929] = 574;
  ans[932] = 576;
  ans[934] = 577;
  ans[937] = 579;
  ans[939] = 580;
  ans[942] = 582;
  ans[945] = 584;
  ans[947] = 585;
  ans[950] = 587;
  ans[952] = 588;
  ans[955] = 590;
  ans[958] = 592;
  ans[960] = 593;
  ans[963] = 595;
  ans[966] = 597;
  ans[968] = 598;
  ans[971] = 600;
  ans[973] = 601;
  ans[976] = 603;
  ans[979] = 605;
  ans[981] = 606;
  ans[984] = 608;
  ans[986] = 609;
  ans[989] = 611;
  ans[992] = 613;
  ans[994] = 614;
  ans[997] = 616;
  ans[1000] = 618;

  while(t--) {
    cin >> a;
    cin >> b;

    if (a == 0 && b == 0) {
      cout << "NO\n";
      continue;
    }

    if (a < b) {
      s = a;
      a = b;
      b = s;
    }

    cout << ((ans[a] == b) ? "NO\n" : "YES\n");
  }
  return 0;
}