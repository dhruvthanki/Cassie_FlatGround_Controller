/*
 * Automatically Generated from Mathematica.
 * Mon 25 Jun 2018 14:53:42 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t228;
  double t368;
  double t336;
  double t358;
  double t369;
  double t55;
  double t57;
  double t89;
  double t115;
  double t316;
  double t365;
  double t382;
  double t388;
  double t429;
  double t624;
  double t629;
  double t633;
  double t20;
  double t677;
  double t688;
  double t702;
  double t728;
  double t731;
  double t766;
  double t866;
  double t928;
  double t944;
  double t948;
  double t1076;
  double t1117;
  double t1154;
  double t1161;
  double t1164;
  double t1258;
  double t1282;
  double t1336;
  double t1346;
  double t1352;
  double t1389;
  double t1419;
  double t1467;
  double t1493;
  double t1506;
  double t1516;
  double t1557;
  double t1600;
  double t1613;
  double t1624;
  double t1758;
  double t1788;
  double t1794;
  double t1804;
  double t1812;
  double t1817;
  double t1829;
  double t1846;
  double t1863;
  double t1871;
  double t1975;
  double t1996;
  double t2029;
  double t2051;
  double t2062;
  double t2086;
  double t2250;
  double t2290;
  double t2296;
  double t2318;
  double t2356;
  double t2413;
  double t2443;
  double t94;
  double t155;
  double t156;
  double t319;
  double t333;
  double t438;
  double t569;
  double t572;
  double t573;
  double t655;
  double t660;
  double t676;
  double t2604;
  double t2614;
  double t2615;
  double t2649;
  double t2656;
  double t2659;
  double t780;
  double t872;
  double t899;
  double t2691;
  double t2697;
  double t2728;
  double t1038;
  double t1039;
  double t1050;
  double t1266;
  double t1296;
  double t1319;
  double t2794;
  double t2809;
  double t2814;
  double t2910;
  double t2956;
  double t2960;
  double t1381;
  double t1382;
  double t1385;
  double t1519;
  double t1568;
  double t1569;
  double t2973;
  double t2980;
  double t2986;
  double t3010;
  double t3022;
  double t3033;
  double t1664;
  double t1682;
  double t1720;
  double t1825;
  double t1831;
  double t1833;
  double t3054;
  double t3071;
  double t3074;
  double t3121;
  double t3150;
  double t3151;
  double t1899;
  double t1907;
  double t1918;
  double t2197;
  double t2253;
  double t2268;
  double t3224;
  double t3232;
  double t3235;
  double t3240;
  double t3263;
  double t3264;
  double t2336;
  double t2341;
  double t2355;
  double t3277;
  double t3278;
  double t3283;
  double t3346;
  double t3350;
  double t3357;
  double t3602;
  double t3606;
  double t3625;
  double t3658;
  double t3661;
  double t3667;
  double t3807;
  double t3809;
  double t3816;
  double t3837;
  double t3848;
  double t3852;
  double t3867;
  double t3881;
  double t3950;
  double t3997;
  double t4011;
  double t4019;
  double t4045;
  double t4082;
  double t4084;
  double t4127;
  double t4147;
  double t4169;
  double t4178;
  double t4180;
  double t4184;
  double t4222;
  double t4225;
  double t4229;
  double t4237;
  double t4257;
  double t4279;
  double t4509;
  double t4528;
  double t4529;
  double t4540;
  double t4575;
  double t4649;
  double t4816;
  double t4830;
  double t4833;
  double t4853;
  double t4875;
  double t4882;
  double t4922;
  double t4935;
  double t4936;
  double t4947;
  double t4984;
  double t4995;
  double t5025;
  double t5078;
  double t5170;
  double t5242;
  double t5247;
  double t5280;
  double t5292;
  double t5315;
  double t5443;
  double t5472;
  double t5487;
  double t5524;
  double t5559;
  double t5568;
  double t5587;
  double t5873;
  double t5879;
  double t6008;
  double t6083;
  double t6113;
  double t6122;
  double t6301;
  double t6343;
  double t6345;
  double t6353;
  double t6368;
  double t6396;
  double t6453;
  double t6457;
  double t6459;
  double t6499;
  double t6500;
  double t6505;
  double t6605;
  double t6621;
  double t6636;
  double t6666;
  double t6681;
  double t6701;
  double t6737;
  double t6761;
  double t6776;
  double t6821;
  double t6830;
  double t6874;
  double t6946;
  double t6955;
  double t6985;
  double t7311;
  double t7374;
  double t7383;
  double t7477;
  double t7479;
  double t7445;
  double t7464;
  double t7468;
  double t7519;
  double t7530;
  double t7538;
  double t7564;
  double t7569;
  double t7573;
  double t7596;
  double t7601;
  double t7620;
  double t7654;
  double t7662;
  double t7674;
  double t7689;
  double t7696;
  double t7702;
  double t7718;
  double t7725;
  double t7738;
  double t7756;
  double t7759;
  double t7766;
  double t7778;
  double t7781;
  double t7783;
  double t7856;
  double t7858;
  double t7866;
  double t7888;
  double t7889;
  double t7899;
  double t7878;
  double t7882;
  double t7935;
  double t7939;
  double t7940;
  double t7947;
  double t7948;
  double t7953;
  double t7974;
  double t7977;
  double t7980;
  double t7998;
  double t8000;
  double t8001;
  double t8011;
  double t8015;
  double t8020;
  double t8028;
  double t8040;
  double t8041;
  double t8056;
  double t8059;
  double t8064;
  double t8073;
  double t8080;
  double t8084;
  double t8158;
  double t8161;
  double t8164;
  double t8143;
  double t8144;
  double t8152;
  double t8188;
  double t8191;
  double t8194;
  double t8199;
  double t8201;
  double t8203;
  double t8211;
  double t8219;
  double t8227;
  double t8236;
  double t8240;
  double t8241;
  double t8249;
  double t8257;
  double t8258;
  double t8262;
  double t8265;
  double t8277;
  double t8279;
  double t8287;
  double t8289;
  double t8292;
  double t8306;
  double t8338;
  double t8444;
  double t8447;
  double t8463;
  double t8468;
  double t8470;
  double t8475;
  double t8476;
  double t8480;
  double t8488;
  double t8491;
  double t8496;
  double t8503;
  double t8504;
  double t8508;
  double t8514;
  double t8515;
  double t8516;
  double t8519;
  double t8523;
  double t8525;
  double t8531;
  double t8533;
  double t8535;
  double t8539;
  double t8546;
  double t8550;
  double t8584;
  double t8585;
  double t8587;
  double t8600;
  double t8601;
  double t8596;
  double t8597;
  double t8611;
  double t8615;
  double t8617;
  double t8623;
  double t8624;
  double t8625;
  double t8629;
  double t8632;
  double t8633;
  double t8638;
  double t8642;
  double t8643;
  double t8651;
  double t8654;
  double t8655;
  double t8661;
  double t8663;
  double t8664;
  double t8667;
  double t8669;
  double t8671;
  double t8673;
  double t8675;
  double t8676;
  double t8157;
  double t8167;
  double t8177;
  double t8180;
  double t8197;
  double t8207;
  double t8230;
  double t8245;
  double t8261;
  double t8278;
  double t8290;
  double t8343;
  double t8366;
  double t8379;
  double t8391;
  double t8393;
  double t8404;
  double t8408;
  double t8414;
  double t8422;
  double t2821;
  double t2892;
  double t2901;
  double t8738;
  double t8743;
  double t8745;
  double t8748;
  double t8749;
  double t8751;
  double t8755;
  double t8757;
  double t8758;
  double t8765;
  double t8766;
  double t8769;
  double t8777;
  double t8779;
  double t8782;
  double t8787;
  double t8788;
  double t8792;
  double t8703;
  double t8708;
  double t8711;
  double t8720;
  double t8721;
  double t8820;
  double t8821;
  double t8824;
  double t8826;
  double t8827;
  double t8830;
  double t8843;
  double t8846;
  double t8848;
  double t8850;
  double t8852;
  double t8853;
  double t8855;
  double t8857;
  double t8863;
  double t8871;
  double t8872;
  double t8875;
  double t8884;
  double t8885;
  double t8887;
  double t8891;
  double t8892;
  double t8896;
  double t8924;
  double t8925;
  double t8926;
  double t8930;
  double t8931;
  double t8933;
  double t8951;
  double t8954;
  double t8957;
  double t8962;
  double t8965;
  double t8966;
  double t8970;
  double t8973;
  double t8974;
  double t8977;
  double t8980;
  double t8981;
  double t8984;
  double t8987;
  double t8989;
  double t8993;
  double t8995;
  double t8997;
  double t9040;
  double t9042;
  double t9046;
  double t9053;
  double t9054;
  double t9062;
  double t9063;
  double t9064;
  double t9067;
  double t9069;
  double t9070;
  double t9075;
  double t9076;
  double t9079;
  double t9086;
  double t9087;
  double t9089;
  double t9095;
  double t9096;
  double t9099;
  double t9021;
  double t9025;
  double t9030;
  double t9033;
  double t9034;
  double t9117;
  double t9118;
  double t9123;
  double t9125;
  double t9126;
  double t9127;
  double t9129;
  double t9130;
  double t9131;
  double t9133;
  double t9135;
  double t9137;
  double t9141;
  double t9142;
  double t9143;
  double t9149;
  double t9150;
  double t9152;
  double t9154;
  double t9155;
  double t9157;
  double t9159;
  double t9161;
  double t9163;
  double t9170;
  double t9171;
  double t9173;
  double t9191;
  double t9192;
  double t9194;
  double t9197;
  double t9199;
  double t9200;
  double t9203;
  double t9204;
  double t9206;
  double t9213;
  double t9215;
  double t9216;
  double t9219;
  double t9220;
  double t9222;
  double t9224;
  double t9225;
  double t9226;
  double t9230;
  double t9233;
  double t9238;
  double t9242;
  double t9244;
  double t9245;
  double t9247;
  double t9248;
  double t9250;
  double t9274;
  double t9275;
  double t9278;
  double t9279;
  double t9280;
  double t9283;
  double t9284;
  double t9288;
  double t9289;
  double t9290;
  double t9292;
  double t9293;
  double t9294;
  double t9265;
  double t9266;
  double t9267;
  double t9269;
  double t9270;
  double t9309;
  double t9311;
  double t9312;
  double t9317;
  double t9318;
  double t9320;
  double t9321;
  double t9323;
  double t9324;
  double t9325;
  double t9327;
  double t9329;
  double t9331;
  double t9335;
  double t9336;
  double t9337;
  double t9340;
  double t9343;
  double t9344;
  double t9355;
  double t9356;
  double t9357;
  double t9360;
  double t9362;
  double t9365;
  double t9366;
  double t9368;
  double t9369;
  double t9370;
  double t9372;
  double t9373;
  double t9375;
  double t9379;
  double t9381;
  double t9382;
  double t9385;
  double t9386;
  double t9388;
  double t9412;
  double t9413;
  double t9416;
  double t9417;
  double t9419;
  double t9420;
  double t9421;
  double t9404;
  double t9405;
  double t9408;
  double t9409;
  double t9410;
  double t9434;
  double t9435;
  double t9436;
  double t9438;
  double t9440;
  double t9442;
  double t9443;
  double t9445;
  double t9446;
  double t9447;
  double t9449;
  double t9450;
  double t9451;
  double t9463;
  double t9464;
  double t9465;
  double t9467;
  double t9468;
  double t9470;
  double t9471;
  double t9473;
  double t9474;
  double t9475;
  double t9477;
  double t9478;
  double t9479;
  double t9498;
  double t9499;
  double t3489;
  double t9490;
  double t9491;
  double t9492;
  double t9494;
  double t9495;
  double t9509;
  double t9510;
  double t9511;
  double t9514;
  double t9515;
  double t9517;
  double t9518;
  double t9529;
  double t9530;
  double t9531;
  double t9534;
  double t9535;
  double t9537;
  double t9538;
  double t9501;
  double t3500;
  double t3554;
  double t9549;
  double t9550;
  double t9552;
  double t9553;
  double t9554;
  double t9520;
  double t9562;
  double t9563;
  double t9564;
  double t9524;
  double t9540;
  double t9574;
  double t9575;
  double t9576;
  double t9544;
  t228 = Sin(var1[3]);
  t368 = Cos(var1[3]);
  t336 = Cos(var1[5]);
  t358 = Sin(var1[4]);
  t369 = Sin(var1[5]);
  t55 = Cos(var1[14]);
  t57 = -1.*t55;
  t89 = 1. + t57;
  t115 = Sin(var1[14]);
  t316 = Sin(var1[13]);
  t365 = -1.*t336*t228*t358;
  t382 = t368*t369;
  t388 = t365 + t382;
  t429 = Cos(var1[13]);
  t624 = -1.*t368*t336;
  t629 = -1.*t228*t358*t369;
  t633 = t624 + t629;
  t20 = Cos(var1[4]);
  t677 = t316*t388;
  t688 = t429*t633;
  t702 = t677 + t688;
  t728 = Cos(var1[15]);
  t731 = -1.*t728;
  t766 = 1. + t731;
  t866 = Sin(var1[15]);
  t928 = t429*t388;
  t944 = -1.*t316*t633;
  t948 = t928 + t944;
  t1076 = -1.*t55*t20*t228;
  t1117 = t115*t702;
  t1154 = t1076 + t1117;
  t1161 = Cos(var1[16]);
  t1164 = -1.*t1161;
  t1258 = 1. + t1164;
  t1282 = Sin(var1[16]);
  t1336 = t866*t948;
  t1346 = t728*t1154;
  t1352 = t1336 + t1346;
  t1389 = t728*t948;
  t1419 = -1.*t866*t1154;
  t1467 = t1389 + t1419;
  t1493 = Cos(var1[17]);
  t1506 = -1.*t1493;
  t1516 = 1. + t1506;
  t1557 = Sin(var1[17]);
  t1600 = -1.*t1282*t1352;
  t1613 = t1161*t1467;
  t1624 = t1600 + t1613;
  t1758 = t1161*t1352;
  t1788 = t1282*t1467;
  t1794 = t1758 + t1788;
  t1804 = Cos(var1[18]);
  t1812 = -1.*t1804;
  t1817 = 1. + t1812;
  t1829 = Sin(var1[18]);
  t1846 = t1557*t1624;
  t1863 = t1493*t1794;
  t1871 = t1846 + t1863;
  t1975 = t1493*t1624;
  t1996 = -1.*t1557*t1794;
  t2029 = t1975 + t1996;
  t2051 = Cos(var1[19]);
  t2062 = -1.*t2051;
  t2086 = 1. + t2062;
  t2250 = Sin(var1[19]);
  t2290 = -1.*t1829*t1871;
  t2296 = t1804*t2029;
  t2318 = t2290 + t2296;
  t2356 = t1804*t1871;
  t2413 = t1829*t2029;
  t2443 = t2356 + t2413;
  t94 = -0.049*t89;
  t155 = -0.135*t115;
  t156 = 0. + t94 + t155;
  t319 = 0.135*t316;
  t333 = 0. + t319;
  t438 = -1.*t429;
  t569 = 1. + t438;
  t572 = -0.135*t569;
  t573 = 0. + t572;
  t655 = -0.135*t89;
  t660 = 0.049*t115;
  t676 = 0. + t655 + t660;
  t2604 = t368*t336*t358;
  t2614 = t228*t369;
  t2615 = t2604 + t2614;
  t2649 = -1.*t336*t228;
  t2656 = t368*t358*t369;
  t2659 = t2649 + t2656;
  t780 = -0.09*t766;
  t872 = 0.049*t866;
  t899 = 0. + t780 + t872;
  t2691 = t316*t2615;
  t2697 = t429*t2659;
  t2728 = t2691 + t2697;
  t1038 = -0.049*t766;
  t1039 = -0.09*t866;
  t1050 = 0. + t1038 + t1039;
  t1266 = -0.049*t1258;
  t1296 = -0.21*t1282;
  t1319 = 0. + t1266 + t1296;
  t2794 = t429*t2615;
  t2809 = -1.*t316*t2659;
  t2814 = t2794 + t2809;
  t2910 = t55*t368*t20;
  t2956 = t115*t2728;
  t2960 = t2910 + t2956;
  t1381 = -0.21*t1258;
  t1382 = 0.049*t1282;
  t1385 = 0. + t1381 + t1382;
  t1519 = -0.2707*t1516;
  t1568 = 0.0016*t1557;
  t1569 = 0. + t1519 + t1568;
  t2973 = t866*t2814;
  t2980 = t728*t2960;
  t2986 = t2973 + t2980;
  t3010 = t728*t2814;
  t3022 = -1.*t866*t2960;
  t3033 = t3010 + t3022;
  t1664 = -0.0016*t1516;
  t1682 = -0.2707*t1557;
  t1720 = 0. + t1664 + t1682;
  t1825 = 0.0184*t1817;
  t1831 = -0.7055*t1829;
  t1833 = 0. + t1825 + t1831;
  t3054 = -1.*t1282*t2986;
  t3071 = t1161*t3033;
  t3074 = t3054 + t3071;
  t3121 = t1161*t2986;
  t3150 = t1282*t3033;
  t3151 = t3121 + t3150;
  t1899 = -0.7055*t1817;
  t1907 = -0.0184*t1829;
  t1918 = 0. + t1899 + t1907;
  t2197 = -1.1135*t2086;
  t2253 = 0.0216*t2250;
  t2268 = 0. + t2197 + t2253;
  t3224 = t1557*t3074;
  t3232 = t1493*t3151;
  t3235 = t3224 + t3232;
  t3240 = t1493*t3074;
  t3263 = -1.*t1557*t3151;
  t3264 = t3240 + t3263;
  t2336 = -0.0216*t2086;
  t2341 = -1.1135*t2250;
  t2355 = 0. + t2336 + t2341;
  t3277 = -1.*t1829*t3235;
  t3278 = t1804*t3264;
  t3283 = t3277 + t3278;
  t3346 = t1804*t3235;
  t3350 = t1829*t3264;
  t3357 = t3346 + t3350;
  t3602 = t368*t20*t336*t316;
  t3606 = t429*t368*t20*t369;
  t3625 = t3602 + t3606;
  t3658 = t429*t368*t20*t336;
  t3661 = -1.*t368*t20*t316*t369;
  t3667 = t3658 + t3661;
  t3807 = -1.*t55*t368*t358;
  t3809 = t115*t3625;
  t3816 = t3807 + t3809;
  t3837 = t866*t3667;
  t3848 = t728*t3816;
  t3852 = t3837 + t3848;
  t3867 = t728*t3667;
  t3881 = -1.*t866*t3816;
  t3950 = t3867 + t3881;
  t3997 = -1.*t1282*t3852;
  t4011 = t1161*t3950;
  t4019 = t3997 + t4011;
  t4045 = t1161*t3852;
  t4082 = t1282*t3950;
  t4084 = t4045 + t4082;
  t4127 = t1557*t4019;
  t4147 = t1493*t4084;
  t4169 = t4127 + t4147;
  t4178 = t1493*t4019;
  t4180 = -1.*t1557*t4084;
  t4184 = t4178 + t4180;
  t4222 = -1.*t1829*t4169;
  t4225 = t1804*t4184;
  t4229 = t4222 + t4225;
  t4237 = t1804*t4169;
  t4257 = t1829*t4184;
  t4279 = t4237 + t4257;
  t4509 = t20*t336*t316*t228;
  t4528 = t429*t20*t228*t369;
  t4529 = t4509 + t4528;
  t4540 = t429*t20*t336*t228;
  t4575 = -1.*t20*t316*t228*t369;
  t4649 = t4540 + t4575;
  t4816 = -1.*t55*t228*t358;
  t4830 = t115*t4529;
  t4833 = t4816 + t4830;
  t4853 = t866*t4649;
  t4875 = t728*t4833;
  t4882 = t4853 + t4875;
  t4922 = t728*t4649;
  t4935 = -1.*t866*t4833;
  t4936 = t4922 + t4935;
  t4947 = -1.*t1282*t4882;
  t4984 = t1161*t4936;
  t4995 = t4947 + t4984;
  t5025 = t1161*t4882;
  t5078 = t1282*t4936;
  t5170 = t5025 + t5078;
  t5242 = t1557*t4995;
  t5247 = t1493*t5170;
  t5280 = t5242 + t5247;
  t5292 = t1493*t4995;
  t5315 = -1.*t1557*t5170;
  t5443 = t5292 + t5315;
  t5472 = -1.*t1829*t5280;
  t5487 = t1804*t5443;
  t5524 = t5472 + t5487;
  t5559 = t1804*t5280;
  t5568 = t1829*t5443;
  t5587 = t5559 + t5568;
  t5873 = -1.*t336*t316*t358;
  t5879 = -1.*t429*t358*t369;
  t6008 = t5873 + t5879;
  t6083 = -1.*t429*t336*t358;
  t6113 = t316*t358*t369;
  t6122 = t6083 + t6113;
  t6301 = -1.*t55*t20;
  t6343 = t115*t6008;
  t6345 = t6301 + t6343;
  t6353 = t866*t6122;
  t6368 = t728*t6345;
  t6396 = t6353 + t6368;
  t6453 = t728*t6122;
  t6457 = -1.*t866*t6345;
  t6459 = t6453 + t6457;
  t6499 = -1.*t1282*t6396;
  t6500 = t1161*t6459;
  t6505 = t6499 + t6500;
  t6605 = t1161*t6396;
  t6621 = t1282*t6459;
  t6636 = t6605 + t6621;
  t6666 = t1557*t6505;
  t6681 = t1493*t6636;
  t6701 = t6666 + t6681;
  t6737 = t1493*t6505;
  t6761 = -1.*t1557*t6636;
  t6776 = t6737 + t6761;
  t6821 = -1.*t1829*t6701;
  t6830 = t1804*t6776;
  t6874 = t6821 + t6830;
  t6946 = t1804*t6701;
  t6955 = t1829*t6776;
  t6985 = t6946 + t6955;
  t7311 = t336*t228;
  t7374 = -1.*t368*t358*t369;
  t7383 = t7311 + t7374;
  t7477 = t316*t7383;
  t7479 = t2794 + t7477;
  t7445 = -1.*t316*t2615;
  t7464 = t429*t7383;
  t7468 = t7445 + t7464;
  t7519 = t866*t7468;
  t7530 = t728*t115*t7479;
  t7538 = t7519 + t7530;
  t7564 = t728*t7468;
  t7569 = -1.*t115*t866*t7479;
  t7573 = t7564 + t7569;
  t7596 = -1.*t1282*t7538;
  t7601 = t1161*t7573;
  t7620 = t7596 + t7601;
  t7654 = t1161*t7538;
  t7662 = t1282*t7573;
  t7674 = t7654 + t7662;
  t7689 = t1557*t7620;
  t7696 = t1493*t7674;
  t7702 = t7689 + t7696;
  t7718 = t1493*t7620;
  t7725 = -1.*t1557*t7674;
  t7738 = t7718 + t7725;
  t7756 = -1.*t1829*t7702;
  t7759 = t1804*t7738;
  t7766 = t7756 + t7759;
  t7778 = t1804*t7702;
  t7781 = t1829*t7738;
  t7783 = t7778 + t7781;
  t7856 = t336*t228*t358;
  t7858 = -1.*t368*t369;
  t7866 = t7856 + t7858;
  t7888 = t429*t7866;
  t7889 = t316*t633;
  t7899 = t7888 + t7889;
  t7878 = -1.*t316*t7866;
  t7882 = t7878 + t688;
  t7935 = t866*t7882;
  t7939 = t728*t115*t7899;
  t7940 = t7935 + t7939;
  t7947 = t728*t7882;
  t7948 = -1.*t115*t866*t7899;
  t7953 = t7947 + t7948;
  t7974 = -1.*t1282*t7940;
  t7977 = t1161*t7953;
  t7980 = t7974 + t7977;
  t7998 = t1161*t7940;
  t8000 = t1282*t7953;
  t8001 = t7998 + t8000;
  t8011 = t1557*t7980;
  t8015 = t1493*t8001;
  t8020 = t8011 + t8015;
  t8028 = t1493*t7980;
  t8040 = -1.*t1557*t8001;
  t8041 = t8028 + t8040;
  t8056 = -1.*t1829*t8020;
  t8059 = t1804*t8041;
  t8064 = t8056 + t8059;
  t8073 = t1804*t8020;
  t8080 = t1829*t8041;
  t8084 = t8073 + t8080;
  t8158 = t429*t20*t336;
  t8161 = -1.*t20*t316*t369;
  t8164 = t8158 + t8161;
  t8143 = -1.*t20*t336*t316;
  t8144 = -1.*t429*t20*t369;
  t8152 = t8143 + t8144;
  t8188 = t866*t8152;
  t8191 = t728*t115*t8164;
  t8194 = t8188 + t8191;
  t8199 = t728*t8152;
  t8201 = -1.*t115*t866*t8164;
  t8203 = t8199 + t8201;
  t8211 = -1.*t1282*t8194;
  t8219 = t1161*t8203;
  t8227 = t8211 + t8219;
  t8236 = t1161*t8194;
  t8240 = t1282*t8203;
  t8241 = t8236 + t8240;
  t8249 = t1557*t8227;
  t8257 = t1493*t8241;
  t8258 = t8249 + t8257;
  t8262 = t1493*t8227;
  t8265 = -1.*t1557*t8241;
  t8277 = t8262 + t8265;
  t8279 = -1.*t1829*t8258;
  t8287 = t1804*t8277;
  t8289 = t8279 + t8287;
  t8292 = t1804*t8258;
  t8306 = t1829*t8277;
  t8338 = t8292 + t8306;
  t8444 = -1.*t429*t2659;
  t8447 = t7445 + t8444;
  t8463 = t866*t8447;
  t8468 = t728*t115*t2814;
  t8470 = t8463 + t8468;
  t8475 = t728*t8447;
  t8476 = -1.*t115*t866*t2814;
  t8480 = t8475 + t8476;
  t8488 = -1.*t1282*t8470;
  t8491 = t1161*t8480;
  t8496 = t8488 + t8491;
  t8503 = t1161*t8470;
  t8504 = t1282*t8480;
  t8508 = t8503 + t8504;
  t8514 = t1557*t8496;
  t8515 = t1493*t8508;
  t8516 = t8514 + t8515;
  t8519 = t1493*t8496;
  t8523 = -1.*t1557*t8508;
  t8525 = t8519 + t8523;
  t8531 = -1.*t1829*t8516;
  t8533 = t1804*t8525;
  t8535 = t8531 + t8533;
  t8539 = t1804*t8516;
  t8546 = t1829*t8525;
  t8550 = t8539 + t8546;
  t8584 = t368*t336;
  t8585 = t228*t358*t369;
  t8587 = t8584 + t8585;
  t8600 = -1.*t316*t8587;
  t8601 = t7888 + t8600;
  t8596 = -1.*t429*t8587;
  t8597 = t7878 + t8596;
  t8611 = t866*t8597;
  t8615 = t728*t115*t8601;
  t8617 = t8611 + t8615;
  t8623 = t728*t8597;
  t8624 = -1.*t115*t866*t8601;
  t8625 = t8623 + t8624;
  t8629 = -1.*t1282*t8617;
  t8632 = t1161*t8625;
  t8633 = t8629 + t8632;
  t8638 = t1161*t8617;
  t8642 = t1282*t8625;
  t8643 = t8638 + t8642;
  t8651 = t1557*t8633;
  t8654 = t1493*t8643;
  t8655 = t8651 + t8654;
  t8661 = t1493*t8633;
  t8663 = -1.*t1557*t8643;
  t8664 = t8661 + t8663;
  t8667 = -1.*t1829*t8655;
  t8669 = t1804*t8664;
  t8671 = t8667 + t8669;
  t8673 = t1804*t8655;
  t8675 = t1829*t8664;
  t8676 = t8673 + t8675;
  t8157 = t899*t8152;
  t8167 = -0.1305*t55*t8164;
  t8177 = t676*t8164;
  t8180 = t115*t1050*t8164;
  t8197 = t1319*t8194;
  t8207 = t1385*t8203;
  t8230 = t1569*t8227;
  t8245 = t1720*t8241;
  t8261 = t1833*t8258;
  t8278 = t1918*t8277;
  t8290 = t2268*t8289;
  t8343 = t2355*t8338;
  t8366 = t2250*t8289;
  t8379 = t2051*t8338;
  t8391 = t8366 + t8379;
  t8393 = 0.077577*t8391;
  t8404 = t2051*t8289;
  t8408 = -1.*t2250*t8338;
  t8414 = t8404 + t8408;
  t8422 = -1.059658*t8414;
  t2821 = -1.*t368*t20*t115;
  t2892 = t55*t2728;
  t2901 = t2821 + t2892;
  t8738 = -1.*t1161*t866*t2901;
  t8743 = -1.*t728*t1282*t2901;
  t8745 = t8738 + t8743;
  t8748 = t728*t1161*t2901;
  t8749 = -1.*t866*t1282*t2901;
  t8751 = t8748 + t8749;
  t8755 = t1557*t8745;
  t8757 = t1493*t8751;
  t8758 = t8755 + t8757;
  t8765 = t1493*t8745;
  t8766 = -1.*t1557*t8751;
  t8769 = t8765 + t8766;
  t8777 = -1.*t1829*t8758;
  t8779 = t1804*t8769;
  t8782 = t8777 + t8779;
  t8787 = t1804*t8758;
  t8788 = t1829*t8769;
  t8792 = t8787 + t8788;
  t8703 = -0.135*t55;
  t8708 = -0.049*t115;
  t8711 = t8703 + t8708;
  t8720 = 0.049*t55;
  t8721 = t8720 + t155;
  t8820 = t316*t7866;
  t8821 = t429*t8587;
  t8824 = t8820 + t8821;
  t8826 = -1.*t20*t115*t228;
  t8827 = t55*t8824;
  t8830 = t8826 + t8827;
  t8843 = -1.*t1161*t866*t8830;
  t8846 = -1.*t728*t1282*t8830;
  t8848 = t8843 + t8846;
  t8850 = t728*t1161*t8830;
  t8852 = -1.*t866*t1282*t8830;
  t8853 = t8850 + t8852;
  t8855 = t1557*t8848;
  t8857 = t1493*t8853;
  t8863 = t8855 + t8857;
  t8871 = t1493*t8848;
  t8872 = -1.*t1557*t8853;
  t8875 = t8871 + t8872;
  t8884 = -1.*t1829*t8863;
  t8885 = t1804*t8875;
  t8887 = t8884 + t8885;
  t8891 = t1804*t8863;
  t8892 = t1829*t8875;
  t8896 = t8891 + t8892;
  t8924 = t20*t336*t316;
  t8925 = t429*t20*t369;
  t8926 = t8924 + t8925;
  t8930 = t115*t358;
  t8931 = t55*t8926;
  t8933 = t8930 + t8931;
  t8951 = -1.*t1161*t866*t8933;
  t8954 = -1.*t728*t1282*t8933;
  t8957 = t8951 + t8954;
  t8962 = t728*t1161*t8933;
  t8965 = -1.*t866*t1282*t8933;
  t8966 = t8962 + t8965;
  t8970 = t1557*t8957;
  t8973 = t1493*t8966;
  t8974 = t8970 + t8973;
  t8977 = t1493*t8957;
  t8980 = -1.*t1557*t8966;
  t8981 = t8977 + t8980;
  t8984 = -1.*t1829*t8974;
  t8987 = t1804*t8981;
  t8989 = t8984 + t8987;
  t8993 = t1804*t8974;
  t8995 = t1829*t8981;
  t8997 = t8993 + t8995;
  t9040 = -1.*t866*t2814;
  t9042 = -1.*t728*t2960;
  t9046 = t9040 + t9042;
  t9053 = t1282*t9046;
  t9054 = t9053 + t3071;
  t9062 = t1161*t9046;
  t9063 = -1.*t1282*t3033;
  t9064 = t9062 + t9063;
  t9067 = -1.*t1557*t9054;
  t9069 = t1493*t9064;
  t9070 = t9067 + t9069;
  t9075 = t1493*t9054;
  t9076 = t1557*t9064;
  t9079 = t9075 + t9076;
  t9086 = t1829*t9070;
  t9087 = t1804*t9079;
  t9089 = t9086 + t9087;
  t9095 = t1804*t9070;
  t9096 = -1.*t1829*t9079;
  t9099 = t9095 + t9096;
  t9021 = 0.049*t728;
  t9025 = t9021 + t1039;
  t9030 = -0.09*t728;
  t9033 = -0.049*t866;
  t9034 = t9030 + t9033;
  t9117 = t55*t20*t228;
  t9118 = t115*t8824;
  t9123 = t9117 + t9118;
  t9125 = -1.*t866*t8601;
  t9126 = -1.*t728*t9123;
  t9127 = t9125 + t9126;
  t9129 = t728*t8601;
  t9130 = -1.*t866*t9123;
  t9131 = t9129 + t9130;
  t9133 = t1282*t9127;
  t9135 = t1161*t9131;
  t9137 = t9133 + t9135;
  t9141 = t1161*t9127;
  t9142 = -1.*t1282*t9131;
  t9143 = t9141 + t9142;
  t9149 = -1.*t1557*t9137;
  t9150 = t1493*t9143;
  t9152 = t9149 + t9150;
  t9154 = t1493*t9137;
  t9155 = t1557*t9143;
  t9157 = t9154 + t9155;
  t9159 = t1829*t9152;
  t9161 = t1804*t9157;
  t9163 = t9159 + t9161;
  t9170 = t1804*t9152;
  t9171 = -1.*t1829*t9157;
  t9173 = t9170 + t9171;
  t9191 = -1.*t55*t358;
  t9192 = t115*t8926;
  t9194 = t9191 + t9192;
  t9197 = -1.*t866*t8164;
  t9199 = -1.*t728*t9194;
  t9200 = t9197 + t9199;
  t9203 = t728*t8164;
  t9204 = -1.*t866*t9194;
  t9206 = t9203 + t9204;
  t9213 = t1282*t9200;
  t9215 = t1161*t9206;
  t9216 = t9213 + t9215;
  t9219 = t1161*t9200;
  t9220 = -1.*t1282*t9206;
  t9222 = t9219 + t9220;
  t9224 = -1.*t1557*t9216;
  t9225 = t1493*t9222;
  t9226 = t9224 + t9225;
  t9230 = t1493*t9216;
  t9233 = t1557*t9222;
  t9238 = t9230 + t9233;
  t9242 = t1829*t9226;
  t9244 = t1804*t9238;
  t9245 = t9242 + t9244;
  t9247 = t1804*t9226;
  t9248 = -1.*t1829*t9238;
  t9250 = t9247 + t9248;
  t9274 = -1.*t1161*t2986;
  t9275 = t9274 + t9063;
  t9278 = -1.*t1557*t3074;
  t9279 = t1493*t9275;
  t9280 = t9278 + t9279;
  t9283 = t1557*t9275;
  t9284 = t3240 + t9283;
  t9288 = t1829*t9280;
  t9289 = t1804*t9284;
  t9290 = t9288 + t9289;
  t9292 = t1804*t9280;
  t9293 = -1.*t1829*t9284;
  t9294 = t9292 + t9293;
  t9265 = -0.21*t1161;
  t9266 = -0.049*t1282;
  t9267 = t9265 + t9266;
  t9269 = 0.049*t1161;
  t9270 = t9269 + t1296;
  t9309 = t866*t8601;
  t9311 = t728*t9123;
  t9312 = t9309 + t9311;
  t9317 = -1.*t1282*t9312;
  t9318 = t9317 + t9135;
  t9320 = -1.*t1161*t9312;
  t9321 = t9320 + t9142;
  t9323 = -1.*t1557*t9318;
  t9324 = t1493*t9321;
  t9325 = t9323 + t9324;
  t9327 = t1493*t9318;
  t9329 = t1557*t9321;
  t9331 = t9327 + t9329;
  t9335 = t1829*t9325;
  t9336 = t1804*t9331;
  t9337 = t9335 + t9336;
  t9340 = t1804*t9325;
  t9343 = -1.*t1829*t9331;
  t9344 = t9340 + t9343;
  t9355 = t866*t8164;
  t9356 = t728*t9194;
  t9357 = t9355 + t9356;
  t9360 = -1.*t1282*t9357;
  t9362 = t9360 + t9215;
  t9365 = -1.*t1161*t9357;
  t9366 = t9365 + t9220;
  t9368 = -1.*t1557*t9362;
  t9369 = t1493*t9366;
  t9370 = t9368 + t9369;
  t9372 = t1493*t9362;
  t9373 = t1557*t9366;
  t9375 = t9372 + t9373;
  t9379 = t1829*t9370;
  t9381 = t1804*t9375;
  t9382 = t9379 + t9381;
  t9385 = t1804*t9370;
  t9386 = -1.*t1829*t9375;
  t9388 = t9385 + t9386;
  t9412 = -1.*t1493*t3151;
  t9413 = t9278 + t9412;
  t9416 = t1829*t9413;
  t9417 = t9416 + t3278;
  t9419 = t1804*t9413;
  t9420 = -1.*t1829*t3264;
  t9421 = t9419 + t9420;
  t9404 = 0.0016*t1493;
  t9405 = t9404 + t1682;
  t9408 = -0.2707*t1493;
  t9409 = -0.0016*t1557;
  t9410 = t9408 + t9409;
  t9434 = t1161*t9312;
  t9435 = t1282*t9131;
  t9436 = t9434 + t9435;
  t9438 = -1.*t1493*t9436;
  t9440 = t9323 + t9438;
  t9442 = -1.*t1557*t9436;
  t9443 = t9327 + t9442;
  t9445 = t1829*t9440;
  t9446 = t1804*t9443;
  t9447 = t9445 + t9446;
  t9449 = t1804*t9440;
  t9450 = -1.*t1829*t9443;
  t9451 = t9449 + t9450;
  t9463 = t1161*t9357;
  t9464 = t1282*t9206;
  t9465 = t9463 + t9464;
  t9467 = -1.*t1493*t9465;
  t9468 = t9368 + t9467;
  t9470 = -1.*t1557*t9465;
  t9471 = t9372 + t9470;
  t9473 = t1829*t9468;
  t9474 = t1804*t9471;
  t9475 = t9473 + t9474;
  t9477 = t1804*t9468;
  t9478 = -1.*t1829*t9471;
  t9479 = t9477 + t9478;
  t9498 = -1.*t1804*t3235;
  t9499 = t9498 + t9420;
  t3489 = t2051*t3283;
  t9490 = -0.7055*t1804;
  t9491 = 0.0184*t1829;
  t9492 = t9490 + t9491;
  t9494 = -0.0184*t1804;
  t9495 = t9494 + t1831;
  t9509 = t1557*t9318;
  t9510 = t1493*t9436;
  t9511 = t9509 + t9510;
  t9514 = -1.*t1829*t9511;
  t9515 = t9514 + t9446;
  t9517 = -1.*t1804*t9511;
  t9518 = t9517 + t9450;
  t9529 = t1557*t9362;
  t9530 = t1493*t9465;
  t9531 = t9529 + t9530;
  t9534 = -1.*t1829*t9531;
  t9535 = t9534 + t9474;
  t9537 = -1.*t1804*t9531;
  t9538 = t9537 + t9478;
  t9501 = -1.*t2250*t3283;
  t3500 = -1.*t2250*t3357;
  t3554 = t3489 + t3500;
  t9549 = 0.0216*t2051;
  t9550 = t9549 + t2341;
  t9552 = -1.1135*t2051;
  t9553 = -0.0216*t2250;
  t9554 = t9552 + t9553;
  t9520 = -1.*t2250*t9515;
  t9562 = t1804*t9511;
  t9563 = t1829*t9443;
  t9564 = t9562 + t9563;
  t9524 = t2051*t9515;
  t9540 = -1.*t2250*t9535;
  t9574 = t1804*t9531;
  t9575 = t1829*t9471;
  t9576 = t9574 + t9575;
  t9544 = t2051*t9535;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1050*t1154 + t1319*t1352 + t1385*t1467 + t1569*t1624 + t1720*t1794 + t1833*t1871 + t1918*t2029 - 1.*t156*t20*t228 + t2268*t2318 + t2355*t2443 + 0.077577*(t2250*t2318 + t2051*t2443) - 1.059658*(t2051*t2318 - 1.*t2250*t2443) + t333*t388 + t573*t633 + t676*t702 - 0.1305*(t115*t20*t228 + t55*t702) + t899*t948;
  p_output1[10]=-0.1305*t2901 + t1050*t2960 + t1319*t2986 + t1385*t3033 + t1569*t3074 + t1720*t3151 + t1833*t3235 + t1918*t3264 + t2268*t3283 + t2615*t333 + t2355*t3357 + 0.077577*(t2250*t3283 + t2051*t3357) - 1.059658*t3554 + t156*t20*t368 + t2659*t573 + t2728*t676 + t2814*t899;
  p_output1[11]=0;
  p_output1[12]=t20*t333*t336*t368 - 1.*t156*t358*t368 + t1050*t3816 + t1319*t3852 + t1385*t3950 + t1569*t4019 + t1720*t4084 + t1833*t4169 + t1918*t4184 + t2268*t4229 + t2355*t4279 + 0.077577*(t2250*t4229 + t2051*t4279) - 1.059658*(t2051*t4229 - 1.*t2250*t4279) - 0.1305*(t115*t358*t368 + t3625*t55) + t20*t368*t369*t573 + t3625*t676 + t3667*t899;
  p_output1[13]=t20*t228*t333*t336 - 1.*t156*t228*t358 + t1050*t4833 + t1319*t4882 + t1385*t4936 + t1569*t4995 + t1720*t5170 + t1833*t5280 + t1918*t5443 - 0.1305*(t115*t228*t358 + t4529*t55) + t2268*t5524 + t2355*t5587 + 0.077577*(t2250*t5524 + t2051*t5587) - 1.059658*(t2051*t5524 - 1.*t2250*t5587) + t20*t228*t369*t573 + t4529*t676 + t4649*t899;
  p_output1[14]=-1.*t156*t20 - 1.*t333*t336*t358 - 1.*t358*t369*t573 - 0.1305*(t115*t20 + t55*t6008) + t1050*t6345 + t1319*t6396 + t1385*t6459 + t1569*t6505 + t1720*t6636 + t1833*t6701 + t6008*t676 + t1918*t6776 + t2268*t6874 + t2355*t6985 + 0.077577*(t2250*t6874 + t2051*t6985) - 1.059658*(t2051*t6874 - 1.*t2250*t6985) + t6122*t899;
  p_output1[15]=t2615*t573 + t333*t7383 + t1050*t115*t7479 - 0.1305*t55*t7479 + t676*t7479 + t1319*t7538 + t1385*t7573 + t1569*t7620 + t1720*t7674 + t1833*t7702 + t1918*t7738 + t2268*t7766 + t2355*t7783 + 0.077577*(t2250*t7766 + t2051*t7783) - 1.059658*(t2051*t7766 - 1.*t2250*t7783) + t7468*t899;
  p_output1[16]=t333*t633 + t573*t7866 + t1050*t115*t7899 - 0.1305*t55*t7899 + t676*t7899 + t1319*t7940 + t1385*t7953 + t1569*t7980 + t1720*t8001 + t1833*t8020 + t1918*t8041 + t2268*t8064 + t2355*t8084 + 0.077577*(t2250*t8064 + t2051*t8084) - 1.059658*(t2051*t8064 - 1.*t2250*t8084) + t7882*t899;
  p_output1[17]=-1.*t20*t333*t369 + t20*t336*t573 + t8157 + t8167 + t8177 + t8180 + t8197 + t8207 + t8230 + t8245 + t8261 + t8278 + t8290 + t8343 + t8393 + t8422;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=t1050*t115*t2814 - 0.135*t2659*t316 + 0.135*t2615*t429 - 0.1305*t2814*t55 + t2814*t676 + t1319*t8470 + t1385*t8480 + t1569*t8496 + t1720*t8508 + t1833*t8516 + t1918*t8525 + t2268*t8535 + t2355*t8550 + 0.077577*(t2250*t8535 + t2051*t8550) - 1.059658*(t2051*t8535 - 1.*t2250*t8550) + t8447*t899;
  p_output1[40]=0.135*t429*t7866 - 0.135*t316*t8587 + t1050*t115*t8601 - 0.1305*t55*t8601 + t676*t8601 + t1319*t8617 + t1385*t8625 + t1569*t8633 + t1720*t8643 + t1833*t8655 + t1918*t8664 + t2268*t8671 + t2355*t8676 + 0.077577*(t2250*t8671 + t2051*t8676) - 1.059658*(t2051*t8671 - 1.*t2250*t8676) + t8597*t899;
  p_output1[41]=-0.135*t20*t316*t369 + 0.135*t20*t336*t429 + t8157 + t8167 + t8177 + t8180 + t8197 + t8207 + t8230 + t8245 + t8261 + t8278 + t8290 + t8343 + t8393 + t8422;
  p_output1[42]=t1050*t2901 - 0.1305*(-1.*t115*t2728 - 1.*t20*t368*t55) + t1319*t2901*t728 - 1.*t1385*t2901*t866 + t20*t368*t8711 + t2728*t8721 + t1569*t8745 + t1720*t8751 + t1833*t8758 + t1918*t8769 + t2268*t8782 + t2355*t8792 + 0.077577*(t2250*t8782 + t2051*t8792) - 1.059658*(t2051*t8782 - 1.*t2250*t8792);
  p_output1[43]=t20*t228*t8711 + t8721*t8824 - 0.1305*(t1076 - 1.*t115*t8824) + t1050*t8830 + t1319*t728*t8830 - 1.*t1385*t866*t8830 + t1569*t8848 + t1720*t8853 + t1833*t8863 + t1918*t8875 + t2268*t8887 + t2355*t8896 + 0.077577*(t2250*t8887 + t2051*t8896) - 1.059658*(t2051*t8887 - 1.*t2250*t8896);
  p_output1[44]=-1.*t358*t8711 + t8721*t8926 - 0.1305*(t358*t55 - 1.*t115*t8926) + t1050*t8933 + t1319*t728*t8933 - 1.*t1385*t866*t8933 + t1569*t8957 + t1720*t8966 + t1833*t8974 + t1918*t8981 + t2268*t8989 + t2355*t8997 + 0.077577*(t2250*t8989 + t2051*t8997) - 1.059658*(t2051*t8989 - 1.*t2250*t8997);
  p_output1[45]=t1319*t3033 + t2814*t9025 + t2960*t9034 + t1385*t9046 + t1720*t9054 + t1569*t9064 + t1918*t9070 + t1833*t9079 + t2355*t9089 + t2268*t9099 - 1.059658*(-1.*t2250*t9089 + t2051*t9099) + 0.077577*(t2051*t9089 + t2250*t9099);
  p_output1[46]=t8601*t9025 + t9034*t9123 + t1385*t9127 + t1319*t9131 + t1720*t9137 + t1569*t9143 + t1918*t9152 + t1833*t9157 + t2355*t9163 + t2268*t9173 - 1.059658*(-1.*t2250*t9163 + t2051*t9173) + 0.077577*(t2051*t9163 + t2250*t9173);
  p_output1[47]=t8164*t9025 + t9034*t9194 + t1385*t9200 + t1319*t9206 + t1720*t9216 + t1569*t9222 + t1918*t9226 + t1833*t9238 + t2355*t9245 + t2268*t9250 - 1.059658*(-1.*t2250*t9245 + t2051*t9250) + 0.077577*(t2051*t9245 + t2250*t9250);
  p_output1[48]=t1720*t3074 + t2986*t9267 + t3033*t9270 + t1569*t9275 + t1918*t9280 + t1833*t9284 + t2355*t9290 + t2268*t9294 - 1.059658*(-1.*t2250*t9290 + t2051*t9294) + 0.077577*(t2051*t9290 + t2250*t9294);
  p_output1[49]=t9131*t9270 + t9267*t9312 + t1720*t9318 + t1569*t9321 + t1918*t9325 + t1833*t9331 + t2355*t9337 + t2268*t9344 - 1.059658*(-1.*t2250*t9337 + t2051*t9344) + 0.077577*(t2051*t9337 + t2250*t9344);
  p_output1[50]=t9206*t9270 + t9267*t9357 + t1720*t9362 + t1569*t9366 + t1918*t9370 + t1833*t9375 + t2355*t9382 + t2268*t9388 - 1.059658*(-1.*t2250*t9382 + t2051*t9388) + 0.077577*(t2051*t9382 + t2250*t9388);
  p_output1[51]=t1833*t3264 + t3074*t9405 + t3151*t9410 + t1918*t9413 + t2355*t9417 + t2268*t9421 - 1.059658*(-1.*t2250*t9417 + t2051*t9421) + 0.077577*(t2051*t9417 + t2250*t9421);
  p_output1[52]=t9318*t9405 + t9410*t9436 + t1918*t9440 + t1833*t9443 + t2355*t9447 + t2268*t9451 - 1.059658*(-1.*t2250*t9447 + t2051*t9451) + 0.077577*(t2051*t9447 + t2250*t9451);
  p_output1[53]=t9362*t9405 + t9410*t9465 + t1918*t9468 + t1833*t9471 + t2355*t9475 + t2268*t9479 - 1.059658*(-1.*t2250*t9475 + t2051*t9479) + 0.077577*(t2051*t9475 + t2250*t9479);
  p_output1[54]=t2355*t3283 + t3235*t9492 + t3264*t9495 + t2268*t9499 + 0.077577*(t3489 + t2250*t9499) - 1.059658*(t2051*t9499 + t9501);
  p_output1[55]=t9443*t9495 + t9492*t9511 + t2355*t9515 + t2268*t9518 - 1.059658*(t2051*t9518 + t9520) + 0.077577*(t2250*t9518 + t9524);
  p_output1[56]=t9471*t9495 + t9492*t9531 + t2355*t9535 + t2268*t9538 - 1.059658*(t2051*t9538 + t9540) + 0.077577*(t2250*t9538 + t9544);
  p_output1[57]=0.077577*t3554 - 1.059658*(-1.*t2051*t3357 + t9501) + t3283*t9550 + t3357*t9554;
  p_output1[58]=t9515*t9550 + t9554*t9564 - 1.059658*(t9520 - 1.*t2051*t9564) + 0.077577*(t9524 - 1.*t2250*t9564);
  p_output1[59]=t9535*t9550 + t9554*t9576 - 1.059658*(t9540 - 1.*t2051*t9576) + 0.077577*(t9544 - 1.*t2250*t9576);
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_RightToeBottomFront_mex.hh"

namespace SymExpression
{

void J_RightToeBottomFront_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
