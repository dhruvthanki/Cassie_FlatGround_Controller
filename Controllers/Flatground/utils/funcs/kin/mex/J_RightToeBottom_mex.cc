/*
 * Automatically Generated from Mathematica.
 * Mon 25 Jun 2018 14:53:22 GMT-04:00
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
  double t1854;
  double t1905;
  double t1887;
  double t1888;
  double t1909;
  double t1797;
  double t1804;
  double t1812;
  double t1834;
  double t1870;
  double t1900;
  double t1910;
  double t1913;
  double t1932;
  double t1944;
  double t1952;
  double t1956;
  double t1727;
  double t1982;
  double t1984;
  double t1991;
  double t1999;
  double t2002;
  double t2004;
  double t2008;
  double t2016;
  double t2018;
  double t2019;
  double t2048;
  double t2049;
  double t2054;
  double t2060;
  double t2061;
  double t2064;
  double t2068;
  double t2077;
  double t2084;
  double t2087;
  double t2098;
  double t2099;
  double t2101;
  double t2105;
  double t2106;
  double t2108;
  double t2111;
  double t2116;
  double t2117;
  double t2120;
  double t2130;
  double t2134;
  double t2137;
  double t2140;
  double t2146;
  double t2147;
  double t2152;
  double t2162;
  double t2165;
  double t2168;
  double t2182;
  double t2183;
  double t2185;
  double t2187;
  double t2189;
  double t2190;
  double t2198;
  double t2205;
  double t2208;
  double t2211;
  double t2221;
  double t2223;
  double t2224;
  double t1820;
  double t1841;
  double t1852;
  double t1872;
  double t1873;
  double t1935;
  double t1936;
  double t1938;
  double t1939;
  double t1962;
  double t1973;
  double t1978;
  double t2249;
  double t2251;
  double t2253;
  double t2257;
  double t2258;
  double t2259;
  double t2007;
  double t2013;
  double t2015;
  double t2266;
  double t2269;
  double t2270;
  double t2032;
  double t2036;
  double t2044;
  double t2066;
  double t2070;
  double t2072;
  double t2274;
  double t2276;
  double t2279;
  double t2294;
  double t2297;
  double t2298;
  double t2093;
  double t2095;
  double t2096;
  double t2109;
  double t2112;
  double t2114;
  double t2310;
  double t2312;
  double t2313;
  double t2324;
  double t2325;
  double t2329;
  double t2125;
  double t2127;
  double t2129;
  double t2149;
  double t2155;
  double t2160;
  double t2337;
  double t2338;
  double t2341;
  double t2345;
  double t2346;
  double t2348;
  double t2176;
  double t2178;
  double t2181;
  double t2194;
  double t2202;
  double t2204;
  double t2352;
  double t2353;
  double t2354;
  double t2356;
  double t2357;
  double t2360;
  double t2215;
  double t2216;
  double t2219;
  double t2365;
  double t2368;
  double t2370;
  double t2374;
  double t2376;
  double t2378;
  double t2413;
  double t2416;
  double t2418;
  double t2424;
  double t2425;
  double t2426;
  double t2440;
  double t2442;
  double t2443;
  double t2447;
  double t2448;
  double t2449;
  double t2455;
  double t2457;
  double t2458;
  double t2460;
  double t2462;
  double t2465;
  double t2471;
  double t2472;
  double t2476;
  double t2481;
  double t2485;
  double t2487;
  double t2492;
  double t2494;
  double t2496;
  double t2498;
  double t2499;
  double t2501;
  double t2514;
  double t2518;
  double t2522;
  double t2565;
  double t2566;
  double t2567;
  double t2571;
  double t2576;
  double t2577;
  double t2593;
  double t2594;
  double t2595;
  double t2599;
  double t2600;
  double t2603;
  double t2610;
  double t2612;
  double t2613;
  double t2618;
  double t2621;
  double t2622;
  double t2625;
  double t2627;
  double t2629;
  double t2635;
  double t2640;
  double t2641;
  double t2645;
  double t2646;
  double t2647;
  double t2653;
  double t2657;
  double t2658;
  double t2662;
  double t2664;
  double t2665;
  double t2700;
  double t2703;
  double t2705;
  double t2708;
  double t2710;
  double t2711;
  double t2724;
  double t2727;
  double t2731;
  double t2736;
  double t2737;
  double t2740;
  double t2743;
  double t2744;
  double t2747;
  double t2751;
  double t2752;
  double t2755;
  double t2758;
  double t2759;
  double t2762;
  double t2773;
  double t2779;
  double t2784;
  double t2792;
  double t2798;
  double t2800;
  double t2806;
  double t2808;
  double t2815;
  double t2823;
  double t2824;
  double t2827;
  double t2852;
  double t2857;
  double t2858;
  double t2872;
  double t2877;
  double t2863;
  double t2866;
  double t2867;
  double t2883;
  double t2886;
  double t2889;
  double t2892;
  double t2893;
  double t2895;
  double t2898;
  double t2903;
  double t2905;
  double t2911;
  double t2914;
  double t2917;
  double t2920;
  double t2921;
  double t2922;
  double t2925;
  double t2926;
  double t2927;
  double t2930;
  double t2934;
  double t2939;
  double t2941;
  double t2943;
  double t2944;
  double t2975;
  double t2979;
  double t2980;
  double t2994;
  double t2996;
  double t2997;
  double t2986;
  double t2989;
  double t3003;
  double t3004;
  double t3006;
  double t3011;
  double t3012;
  double t3014;
  double t3018;
  double t3019;
  double t3021;
  double t3024;
  double t3027;
  double t3028;
  double t3030;
  double t3031;
  double t3033;
  double t3035;
  double t3037;
  double t3038;
  double t3044;
  double t3045;
  double t3046;
  double t3050;
  double t3051;
  double t3053;
  double t3080;
  double t3081;
  double t3082;
  double t3076;
  double t3077;
  double t3078;
  double t3090;
  double t3093;
  double t3095;
  double t3098;
  double t3099;
  double t3102;
  double t3105;
  double t3109;
  double t3112;
  double t3115;
  double t3116;
  double t3118;
  double t3121;
  double t3123;
  double t3125;
  double t3131;
  double t3132;
  double t3134;
  double t3136;
  double t3137;
  double t3138;
  double t3141;
  double t3142;
  double t3144;
  double t3163;
  double t3164;
  double t3176;
  double t3177;
  double t3179;
  double t3182;
  double t3184;
  double t3185;
  double t3189;
  double t3191;
  double t3192;
  double t3196;
  double t3197;
  double t3199;
  double t3203;
  double t3204;
  double t3205;
  double t3207;
  double t3208;
  double t3209;
  double t3211;
  double t3214;
  double t3215;
  double t3219;
  double t3223;
  double t3224;
  double t3243;
  double t3246;
  double t3247;
  double t3254;
  double t3255;
  double t3250;
  double t3251;
  double t3259;
  double t3260;
  double t3263;
  double t3270;
  double t3272;
  double t3276;
  double t3278;
  double t3280;
  double t3281;
  double t3287;
  double t3290;
  double t3292;
  double t3294;
  double t3296;
  double t3298;
  double t3300;
  double t3302;
  double t3303;
  double t3307;
  double t3308;
  double t3309;
  double t3311;
  double t3312;
  double t3313;
  double t3079;
  double t3083;
  double t3085;
  double t3086;
  double t3096;
  double t3104;
  double t3113;
  double t3119;
  double t3126;
  double t3135;
  double t3140;
  double t3145;
  double t3148;
  double t3150;
  double t3151;
  double t3152;
  double t3154;
  double t3155;
  double t3156;
  double t3157;
  double t2286;
  double t2287;
  double t2288;
  double t3356;
  double t3357;
  double t3358;
  double t3360;
  double t3361;
  double t3362;
  double t3364;
  double t3365;
  double t3366;
  double t3368;
  double t3369;
  double t3370;
  double t3373;
  double t3374;
  double t3376;
  double t3378;
  double t3379;
  double t3381;
  double t3337;
  double t3338;
  double t3340;
  double t3342;
  double t3343;
  double t3396;
  double t3397;
  double t3398;
  double t3400;
  double t3402;
  double t3403;
  double t3414;
  double t3415;
  double t3417;
  double t3419;
  double t3421;
  double t3422;
  double t3426;
  double t3427;
  double t3428;
  double t3430;
  double t3431;
  double t3432;
  double t3434;
  double t3435;
  double t3436;
  double t3439;
  double t3442;
  double t3444;
  double t3461;
  double t3462;
  double t3463;
  double t3465;
  double t3466;
  double t3467;
  double t3475;
  double t3476;
  double t3477;
  double t3480;
  double t3481;
  double t3482;
  double t3485;
  double t3488;
  double t3489;
  double t3491;
  double t3492;
  double t3493;
  double t3495;
  double t3496;
  double t3497;
  double t3499;
  double t3500;
  double t3502;
  double t3526;
  double t3527;
  double t3528;
  double t3533;
  double t3536;
  double t3538;
  double t3540;
  double t3541;
  double t3545;
  double t3546;
  double t3547;
  double t3549;
  double t3550;
  double t3551;
  double t3553;
  double t3554;
  double t3555;
  double t3557;
  double t3558;
  double t3559;
  double t3519;
  double t3520;
  double t3522;
  double t3523;
  double t3524;
  double t3573;
  double t3574;
  double t3576;
  double t3580;
  double t3582;
  double t3583;
  double t3586;
  double t3587;
  double t3589;
  double t3591;
  double t3592;
  double t3593;
  double t3596;
  double t3597;
  double t3600;
  double t3603;
  double t3605;
  double t3606;
  double t3609;
  double t3610;
  double t3611;
  double t3613;
  double t3614;
  double t3615;
  double t3617;
  double t3618;
  double t3619;
  double t3632;
  double t3633;
  double t3634;
  double t3636;
  double t3637;
  double t3638;
  double t3641;
  double t3642;
  double t3643;
  double t3645;
  double t3646;
  double t3647;
  double t3649;
  double t3650;
  double t3651;
  double t3653;
  double t3654;
  double t3655;
  double t3657;
  double t3658;
  double t3659;
  double t3661;
  double t3662;
  double t3663;
  double t3665;
  double t3666;
  double t3667;
  double t3686;
  double t3687;
  double t3689;
  double t3690;
  double t3691;
  double t3693;
  double t3694;
  double t3696;
  double t3697;
  double t3698;
  double t3700;
  double t3701;
  double t3702;
  double t3678;
  double t3679;
  double t3680;
  double t3682;
  double t3683;
  double t3713;
  double t3714;
  double t3715;
  double t3718;
  double t3719;
  double t3721;
  double t3722;
  double t3724;
  double t3725;
  double t3726;
  double t3728;
  double t3729;
  double t3730;
  double t3732;
  double t3733;
  double t3734;
  double t3736;
  double t3737;
  double t3738;
  double t3749;
  double t3750;
  double t3751;
  double t3754;
  double t3755;
  double t3757;
  double t3758;
  double t3760;
  double t3761;
  double t3762;
  double t3764;
  double t3765;
  double t3766;
  double t3768;
  double t3769;
  double t3770;
  double t3772;
  double t3773;
  double t3774;
  double t3792;
  double t3793;
  double t3796;
  double t3797;
  double t3799;
  double t3800;
  double t3801;
  double t3785;
  double t3786;
  double t3788;
  double t3789;
  double t3790;
  double t3813;
  double t3814;
  double t3815;
  double t3817;
  double t3818;
  double t3820;
  double t3821;
  double t3823;
  double t3824;
  double t3825;
  double t3827;
  double t3828;
  double t3829;
  double t3841;
  double t3842;
  double t3843;
  double t3845;
  double t3846;
  double t3848;
  double t3849;
  double t3851;
  double t3852;
  double t3853;
  double t3855;
  double t3856;
  double t3857;
  double t3876;
  double t3877;
  double t2395;
  double t3868;
  double t3869;
  double t3870;
  double t3872;
  double t3873;
  double t3887;
  double t3888;
  double t3889;
  double t3892;
  double t3893;
  double t3895;
  double t3896;
  double t3907;
  double t3908;
  double t3909;
  double t3912;
  double t3913;
  double t3915;
  double t3916;
  double t3879;
  double t2396;
  double t2397;
  double t3927;
  double t3928;
  double t3930;
  double t3931;
  double t3932;
  double t3898;
  double t3940;
  double t3941;
  double t3942;
  double t3902;
  double t3918;
  double t3952;
  double t3953;
  double t3954;
  double t3922;
  t1854 = Sin(var1[3]);
  t1905 = Cos(var1[3]);
  t1887 = Cos(var1[5]);
  t1888 = Sin(var1[4]);
  t1909 = Sin(var1[5]);
  t1797 = Cos(var1[14]);
  t1804 = -1.*t1797;
  t1812 = 1. + t1804;
  t1834 = Sin(var1[14]);
  t1870 = Sin(var1[13]);
  t1900 = -1.*t1887*t1854*t1888;
  t1910 = t1905*t1909;
  t1913 = t1900 + t1910;
  t1932 = Cos(var1[13]);
  t1944 = -1.*t1905*t1887;
  t1952 = -1.*t1854*t1888*t1909;
  t1956 = t1944 + t1952;
  t1727 = Cos(var1[4]);
  t1982 = t1870*t1913;
  t1984 = t1932*t1956;
  t1991 = t1982 + t1984;
  t1999 = Cos(var1[15]);
  t2002 = -1.*t1999;
  t2004 = 1. + t2002;
  t2008 = Sin(var1[15]);
  t2016 = t1932*t1913;
  t2018 = -1.*t1870*t1956;
  t2019 = t2016 + t2018;
  t2048 = -1.*t1797*t1727*t1854;
  t2049 = t1834*t1991;
  t2054 = t2048 + t2049;
  t2060 = Cos(var1[16]);
  t2061 = -1.*t2060;
  t2064 = 1. + t2061;
  t2068 = Sin(var1[16]);
  t2077 = t2008*t2019;
  t2084 = t1999*t2054;
  t2087 = t2077 + t2084;
  t2098 = t1999*t2019;
  t2099 = -1.*t2008*t2054;
  t2101 = t2098 + t2099;
  t2105 = Cos(var1[17]);
  t2106 = -1.*t2105;
  t2108 = 1. + t2106;
  t2111 = Sin(var1[17]);
  t2116 = -1.*t2068*t2087;
  t2117 = t2060*t2101;
  t2120 = t2116 + t2117;
  t2130 = t2060*t2087;
  t2134 = t2068*t2101;
  t2137 = t2130 + t2134;
  t2140 = Cos(var1[18]);
  t2146 = -1.*t2140;
  t2147 = 1. + t2146;
  t2152 = Sin(var1[18]);
  t2162 = t2111*t2120;
  t2165 = t2105*t2137;
  t2168 = t2162 + t2165;
  t2182 = t2105*t2120;
  t2183 = -1.*t2111*t2137;
  t2185 = t2182 + t2183;
  t2187 = Cos(var1[19]);
  t2189 = -1.*t2187;
  t2190 = 1. + t2189;
  t2198 = Sin(var1[19]);
  t2205 = -1.*t2152*t2168;
  t2208 = t2140*t2185;
  t2211 = t2205 + t2208;
  t2221 = t2140*t2168;
  t2223 = t2152*t2185;
  t2224 = t2221 + t2223;
  t1820 = -0.049*t1812;
  t1841 = -0.135*t1834;
  t1852 = 0. + t1820 + t1841;
  t1872 = 0.135*t1870;
  t1873 = 0. + t1872;
  t1935 = -1.*t1932;
  t1936 = 1. + t1935;
  t1938 = -0.135*t1936;
  t1939 = 0. + t1938;
  t1962 = -0.135*t1812;
  t1973 = 0.049*t1834;
  t1978 = 0. + t1962 + t1973;
  t2249 = t1905*t1887*t1888;
  t2251 = t1854*t1909;
  t2253 = t2249 + t2251;
  t2257 = -1.*t1887*t1854;
  t2258 = t1905*t1888*t1909;
  t2259 = t2257 + t2258;
  t2007 = -0.09*t2004;
  t2013 = 0.049*t2008;
  t2015 = 0. + t2007 + t2013;
  t2266 = t1870*t2253;
  t2269 = t1932*t2259;
  t2270 = t2266 + t2269;
  t2032 = -0.049*t2004;
  t2036 = -0.09*t2008;
  t2044 = 0. + t2032 + t2036;
  t2066 = -0.049*t2064;
  t2070 = -0.21*t2068;
  t2072 = 0. + t2066 + t2070;
  t2274 = t1932*t2253;
  t2276 = -1.*t1870*t2259;
  t2279 = t2274 + t2276;
  t2294 = t1797*t1905*t1727;
  t2297 = t1834*t2270;
  t2298 = t2294 + t2297;
  t2093 = -0.21*t2064;
  t2095 = 0.049*t2068;
  t2096 = 0. + t2093 + t2095;
  t2109 = -0.2707*t2108;
  t2112 = 0.0016*t2111;
  t2114 = 0. + t2109 + t2112;
  t2310 = t2008*t2279;
  t2312 = t1999*t2298;
  t2313 = t2310 + t2312;
  t2324 = t1999*t2279;
  t2325 = -1.*t2008*t2298;
  t2329 = t2324 + t2325;
  t2125 = -0.0016*t2108;
  t2127 = -0.2707*t2111;
  t2129 = 0. + t2125 + t2127;
  t2149 = 0.0184*t2147;
  t2155 = -0.7055*t2152;
  t2160 = 0. + t2149 + t2155;
  t2337 = -1.*t2068*t2313;
  t2338 = t2060*t2329;
  t2341 = t2337 + t2338;
  t2345 = t2060*t2313;
  t2346 = t2068*t2329;
  t2348 = t2345 + t2346;
  t2176 = -0.7055*t2147;
  t2178 = -0.0184*t2152;
  t2181 = 0. + t2176 + t2178;
  t2194 = -1.1135*t2190;
  t2202 = 0.0216*t2198;
  t2204 = 0. + t2194 + t2202;
  t2352 = t2111*t2341;
  t2353 = t2105*t2348;
  t2354 = t2352 + t2353;
  t2356 = t2105*t2341;
  t2357 = -1.*t2111*t2348;
  t2360 = t2356 + t2357;
  t2215 = -0.0216*t2190;
  t2216 = -1.1135*t2198;
  t2219 = 0. + t2215 + t2216;
  t2365 = -1.*t2152*t2354;
  t2368 = t2140*t2360;
  t2370 = t2365 + t2368;
  t2374 = t2140*t2354;
  t2376 = t2152*t2360;
  t2378 = t2374 + t2376;
  t2413 = t1905*t1727*t1887*t1870;
  t2416 = t1932*t1905*t1727*t1909;
  t2418 = t2413 + t2416;
  t2424 = t1932*t1905*t1727*t1887;
  t2425 = -1.*t1905*t1727*t1870*t1909;
  t2426 = t2424 + t2425;
  t2440 = -1.*t1797*t1905*t1888;
  t2442 = t1834*t2418;
  t2443 = t2440 + t2442;
  t2447 = t2008*t2426;
  t2448 = t1999*t2443;
  t2449 = t2447 + t2448;
  t2455 = t1999*t2426;
  t2457 = -1.*t2008*t2443;
  t2458 = t2455 + t2457;
  t2460 = -1.*t2068*t2449;
  t2462 = t2060*t2458;
  t2465 = t2460 + t2462;
  t2471 = t2060*t2449;
  t2472 = t2068*t2458;
  t2476 = t2471 + t2472;
  t2481 = t2111*t2465;
  t2485 = t2105*t2476;
  t2487 = t2481 + t2485;
  t2492 = t2105*t2465;
  t2494 = -1.*t2111*t2476;
  t2496 = t2492 + t2494;
  t2498 = -1.*t2152*t2487;
  t2499 = t2140*t2496;
  t2501 = t2498 + t2499;
  t2514 = t2140*t2487;
  t2518 = t2152*t2496;
  t2522 = t2514 + t2518;
  t2565 = t1727*t1887*t1870*t1854;
  t2566 = t1932*t1727*t1854*t1909;
  t2567 = t2565 + t2566;
  t2571 = t1932*t1727*t1887*t1854;
  t2576 = -1.*t1727*t1870*t1854*t1909;
  t2577 = t2571 + t2576;
  t2593 = -1.*t1797*t1854*t1888;
  t2594 = t1834*t2567;
  t2595 = t2593 + t2594;
  t2599 = t2008*t2577;
  t2600 = t1999*t2595;
  t2603 = t2599 + t2600;
  t2610 = t1999*t2577;
  t2612 = -1.*t2008*t2595;
  t2613 = t2610 + t2612;
  t2618 = -1.*t2068*t2603;
  t2621 = t2060*t2613;
  t2622 = t2618 + t2621;
  t2625 = t2060*t2603;
  t2627 = t2068*t2613;
  t2629 = t2625 + t2627;
  t2635 = t2111*t2622;
  t2640 = t2105*t2629;
  t2641 = t2635 + t2640;
  t2645 = t2105*t2622;
  t2646 = -1.*t2111*t2629;
  t2647 = t2645 + t2646;
  t2653 = -1.*t2152*t2641;
  t2657 = t2140*t2647;
  t2658 = t2653 + t2657;
  t2662 = t2140*t2641;
  t2664 = t2152*t2647;
  t2665 = t2662 + t2664;
  t2700 = -1.*t1887*t1870*t1888;
  t2703 = -1.*t1932*t1888*t1909;
  t2705 = t2700 + t2703;
  t2708 = -1.*t1932*t1887*t1888;
  t2710 = t1870*t1888*t1909;
  t2711 = t2708 + t2710;
  t2724 = -1.*t1797*t1727;
  t2727 = t1834*t2705;
  t2731 = t2724 + t2727;
  t2736 = t2008*t2711;
  t2737 = t1999*t2731;
  t2740 = t2736 + t2737;
  t2743 = t1999*t2711;
  t2744 = -1.*t2008*t2731;
  t2747 = t2743 + t2744;
  t2751 = -1.*t2068*t2740;
  t2752 = t2060*t2747;
  t2755 = t2751 + t2752;
  t2758 = t2060*t2740;
  t2759 = t2068*t2747;
  t2762 = t2758 + t2759;
  t2773 = t2111*t2755;
  t2779 = t2105*t2762;
  t2784 = t2773 + t2779;
  t2792 = t2105*t2755;
  t2798 = -1.*t2111*t2762;
  t2800 = t2792 + t2798;
  t2806 = -1.*t2152*t2784;
  t2808 = t2140*t2800;
  t2815 = t2806 + t2808;
  t2823 = t2140*t2784;
  t2824 = t2152*t2800;
  t2827 = t2823 + t2824;
  t2852 = t1887*t1854;
  t2857 = -1.*t1905*t1888*t1909;
  t2858 = t2852 + t2857;
  t2872 = t1870*t2858;
  t2877 = t2274 + t2872;
  t2863 = -1.*t1870*t2253;
  t2866 = t1932*t2858;
  t2867 = t2863 + t2866;
  t2883 = t2008*t2867;
  t2886 = t1999*t1834*t2877;
  t2889 = t2883 + t2886;
  t2892 = t1999*t2867;
  t2893 = -1.*t1834*t2008*t2877;
  t2895 = t2892 + t2893;
  t2898 = -1.*t2068*t2889;
  t2903 = t2060*t2895;
  t2905 = t2898 + t2903;
  t2911 = t2060*t2889;
  t2914 = t2068*t2895;
  t2917 = t2911 + t2914;
  t2920 = t2111*t2905;
  t2921 = t2105*t2917;
  t2922 = t2920 + t2921;
  t2925 = t2105*t2905;
  t2926 = -1.*t2111*t2917;
  t2927 = t2925 + t2926;
  t2930 = -1.*t2152*t2922;
  t2934 = t2140*t2927;
  t2939 = t2930 + t2934;
  t2941 = t2140*t2922;
  t2943 = t2152*t2927;
  t2944 = t2941 + t2943;
  t2975 = t1887*t1854*t1888;
  t2979 = -1.*t1905*t1909;
  t2980 = t2975 + t2979;
  t2994 = t1932*t2980;
  t2996 = t1870*t1956;
  t2997 = t2994 + t2996;
  t2986 = -1.*t1870*t2980;
  t2989 = t2986 + t1984;
  t3003 = t2008*t2989;
  t3004 = t1999*t1834*t2997;
  t3006 = t3003 + t3004;
  t3011 = t1999*t2989;
  t3012 = -1.*t1834*t2008*t2997;
  t3014 = t3011 + t3012;
  t3018 = -1.*t2068*t3006;
  t3019 = t2060*t3014;
  t3021 = t3018 + t3019;
  t3024 = t2060*t3006;
  t3027 = t2068*t3014;
  t3028 = t3024 + t3027;
  t3030 = t2111*t3021;
  t3031 = t2105*t3028;
  t3033 = t3030 + t3031;
  t3035 = t2105*t3021;
  t3037 = -1.*t2111*t3028;
  t3038 = t3035 + t3037;
  t3044 = -1.*t2152*t3033;
  t3045 = t2140*t3038;
  t3046 = t3044 + t3045;
  t3050 = t2140*t3033;
  t3051 = t2152*t3038;
  t3053 = t3050 + t3051;
  t3080 = t1932*t1727*t1887;
  t3081 = -1.*t1727*t1870*t1909;
  t3082 = t3080 + t3081;
  t3076 = -1.*t1727*t1887*t1870;
  t3077 = -1.*t1932*t1727*t1909;
  t3078 = t3076 + t3077;
  t3090 = t2008*t3078;
  t3093 = t1999*t1834*t3082;
  t3095 = t3090 + t3093;
  t3098 = t1999*t3078;
  t3099 = -1.*t1834*t2008*t3082;
  t3102 = t3098 + t3099;
  t3105 = -1.*t2068*t3095;
  t3109 = t2060*t3102;
  t3112 = t3105 + t3109;
  t3115 = t2060*t3095;
  t3116 = t2068*t3102;
  t3118 = t3115 + t3116;
  t3121 = t2111*t3112;
  t3123 = t2105*t3118;
  t3125 = t3121 + t3123;
  t3131 = t2105*t3112;
  t3132 = -1.*t2111*t3118;
  t3134 = t3131 + t3132;
  t3136 = -1.*t2152*t3125;
  t3137 = t2140*t3134;
  t3138 = t3136 + t3137;
  t3141 = t2140*t3125;
  t3142 = t2152*t3134;
  t3144 = t3141 + t3142;
  t3163 = -1.*t1932*t2259;
  t3164 = t2863 + t3163;
  t3176 = t2008*t3164;
  t3177 = t1999*t1834*t2279;
  t3179 = t3176 + t3177;
  t3182 = t1999*t3164;
  t3184 = -1.*t1834*t2008*t2279;
  t3185 = t3182 + t3184;
  t3189 = -1.*t2068*t3179;
  t3191 = t2060*t3185;
  t3192 = t3189 + t3191;
  t3196 = t2060*t3179;
  t3197 = t2068*t3185;
  t3199 = t3196 + t3197;
  t3203 = t2111*t3192;
  t3204 = t2105*t3199;
  t3205 = t3203 + t3204;
  t3207 = t2105*t3192;
  t3208 = -1.*t2111*t3199;
  t3209 = t3207 + t3208;
  t3211 = -1.*t2152*t3205;
  t3214 = t2140*t3209;
  t3215 = t3211 + t3214;
  t3219 = t2140*t3205;
  t3223 = t2152*t3209;
  t3224 = t3219 + t3223;
  t3243 = t1905*t1887;
  t3246 = t1854*t1888*t1909;
  t3247 = t3243 + t3246;
  t3254 = -1.*t1870*t3247;
  t3255 = t2994 + t3254;
  t3250 = -1.*t1932*t3247;
  t3251 = t2986 + t3250;
  t3259 = t2008*t3251;
  t3260 = t1999*t1834*t3255;
  t3263 = t3259 + t3260;
  t3270 = t1999*t3251;
  t3272 = -1.*t1834*t2008*t3255;
  t3276 = t3270 + t3272;
  t3278 = -1.*t2068*t3263;
  t3280 = t2060*t3276;
  t3281 = t3278 + t3280;
  t3287 = t2060*t3263;
  t3290 = t2068*t3276;
  t3292 = t3287 + t3290;
  t3294 = t2111*t3281;
  t3296 = t2105*t3292;
  t3298 = t3294 + t3296;
  t3300 = t2105*t3281;
  t3302 = -1.*t2111*t3292;
  t3303 = t3300 + t3302;
  t3307 = -1.*t2152*t3298;
  t3308 = t2140*t3303;
  t3309 = t3307 + t3308;
  t3311 = t2140*t3298;
  t3312 = t2152*t3303;
  t3313 = t3311 + t3312;
  t3079 = t2015*t3078;
  t3083 = -0.1305*t1797*t3082;
  t3085 = t1978*t3082;
  t3086 = t1834*t2044*t3082;
  t3096 = t2072*t3095;
  t3104 = t2096*t3102;
  t3113 = t2114*t3112;
  t3119 = t2129*t3118;
  t3126 = t2160*t3125;
  t3135 = t2181*t3134;
  t3140 = t2204*t3138;
  t3145 = t2219*t3144;
  t3148 = t2198*t3138;
  t3150 = t2187*t3144;
  t3151 = t3148 + t3150;
  t3152 = 0.0306*t3151;
  t3154 = t2187*t3138;
  t3155 = -1.*t2198*t3144;
  t3156 = t3154 + t3155;
  t3157 = -1.1312*t3156;
  t2286 = -1.*t1905*t1727*t1834;
  t2287 = t1797*t2270;
  t2288 = t2286 + t2287;
  t3356 = -1.*t2060*t2008*t2288;
  t3357 = -1.*t1999*t2068*t2288;
  t3358 = t3356 + t3357;
  t3360 = t1999*t2060*t2288;
  t3361 = -1.*t2008*t2068*t2288;
  t3362 = t3360 + t3361;
  t3364 = t2111*t3358;
  t3365 = t2105*t3362;
  t3366 = t3364 + t3365;
  t3368 = t2105*t3358;
  t3369 = -1.*t2111*t3362;
  t3370 = t3368 + t3369;
  t3373 = -1.*t2152*t3366;
  t3374 = t2140*t3370;
  t3376 = t3373 + t3374;
  t3378 = t2140*t3366;
  t3379 = t2152*t3370;
  t3381 = t3378 + t3379;
  t3337 = -0.135*t1797;
  t3338 = -0.049*t1834;
  t3340 = t3337 + t3338;
  t3342 = 0.049*t1797;
  t3343 = t3342 + t1841;
  t3396 = t1870*t2980;
  t3397 = t1932*t3247;
  t3398 = t3396 + t3397;
  t3400 = -1.*t1727*t1834*t1854;
  t3402 = t1797*t3398;
  t3403 = t3400 + t3402;
  t3414 = -1.*t2060*t2008*t3403;
  t3415 = -1.*t1999*t2068*t3403;
  t3417 = t3414 + t3415;
  t3419 = t1999*t2060*t3403;
  t3421 = -1.*t2008*t2068*t3403;
  t3422 = t3419 + t3421;
  t3426 = t2111*t3417;
  t3427 = t2105*t3422;
  t3428 = t3426 + t3427;
  t3430 = t2105*t3417;
  t3431 = -1.*t2111*t3422;
  t3432 = t3430 + t3431;
  t3434 = -1.*t2152*t3428;
  t3435 = t2140*t3432;
  t3436 = t3434 + t3435;
  t3439 = t2140*t3428;
  t3442 = t2152*t3432;
  t3444 = t3439 + t3442;
  t3461 = t1727*t1887*t1870;
  t3462 = t1932*t1727*t1909;
  t3463 = t3461 + t3462;
  t3465 = t1834*t1888;
  t3466 = t1797*t3463;
  t3467 = t3465 + t3466;
  t3475 = -1.*t2060*t2008*t3467;
  t3476 = -1.*t1999*t2068*t3467;
  t3477 = t3475 + t3476;
  t3480 = t1999*t2060*t3467;
  t3481 = -1.*t2008*t2068*t3467;
  t3482 = t3480 + t3481;
  t3485 = t2111*t3477;
  t3488 = t2105*t3482;
  t3489 = t3485 + t3488;
  t3491 = t2105*t3477;
  t3492 = -1.*t2111*t3482;
  t3493 = t3491 + t3492;
  t3495 = -1.*t2152*t3489;
  t3496 = t2140*t3493;
  t3497 = t3495 + t3496;
  t3499 = t2140*t3489;
  t3500 = t2152*t3493;
  t3502 = t3499 + t3500;
  t3526 = -1.*t2008*t2279;
  t3527 = -1.*t1999*t2298;
  t3528 = t3526 + t3527;
  t3533 = t2068*t3528;
  t3536 = t3533 + t2338;
  t3538 = t2060*t3528;
  t3540 = -1.*t2068*t2329;
  t3541 = t3538 + t3540;
  t3545 = -1.*t2111*t3536;
  t3546 = t2105*t3541;
  t3547 = t3545 + t3546;
  t3549 = t2105*t3536;
  t3550 = t2111*t3541;
  t3551 = t3549 + t3550;
  t3553 = t2152*t3547;
  t3554 = t2140*t3551;
  t3555 = t3553 + t3554;
  t3557 = t2140*t3547;
  t3558 = -1.*t2152*t3551;
  t3559 = t3557 + t3558;
  t3519 = 0.049*t1999;
  t3520 = t3519 + t2036;
  t3522 = -0.09*t1999;
  t3523 = -0.049*t2008;
  t3524 = t3522 + t3523;
  t3573 = t1797*t1727*t1854;
  t3574 = t1834*t3398;
  t3576 = t3573 + t3574;
  t3580 = -1.*t2008*t3255;
  t3582 = -1.*t1999*t3576;
  t3583 = t3580 + t3582;
  t3586 = t1999*t3255;
  t3587 = -1.*t2008*t3576;
  t3589 = t3586 + t3587;
  t3591 = t2068*t3583;
  t3592 = t2060*t3589;
  t3593 = t3591 + t3592;
  t3596 = t2060*t3583;
  t3597 = -1.*t2068*t3589;
  t3600 = t3596 + t3597;
  t3603 = -1.*t2111*t3593;
  t3605 = t2105*t3600;
  t3606 = t3603 + t3605;
  t3609 = t2105*t3593;
  t3610 = t2111*t3600;
  t3611 = t3609 + t3610;
  t3613 = t2152*t3606;
  t3614 = t2140*t3611;
  t3615 = t3613 + t3614;
  t3617 = t2140*t3606;
  t3618 = -1.*t2152*t3611;
  t3619 = t3617 + t3618;
  t3632 = -1.*t1797*t1888;
  t3633 = t1834*t3463;
  t3634 = t3632 + t3633;
  t3636 = -1.*t2008*t3082;
  t3637 = -1.*t1999*t3634;
  t3638 = t3636 + t3637;
  t3641 = t1999*t3082;
  t3642 = -1.*t2008*t3634;
  t3643 = t3641 + t3642;
  t3645 = t2068*t3638;
  t3646 = t2060*t3643;
  t3647 = t3645 + t3646;
  t3649 = t2060*t3638;
  t3650 = -1.*t2068*t3643;
  t3651 = t3649 + t3650;
  t3653 = -1.*t2111*t3647;
  t3654 = t2105*t3651;
  t3655 = t3653 + t3654;
  t3657 = t2105*t3647;
  t3658 = t2111*t3651;
  t3659 = t3657 + t3658;
  t3661 = t2152*t3655;
  t3662 = t2140*t3659;
  t3663 = t3661 + t3662;
  t3665 = t2140*t3655;
  t3666 = -1.*t2152*t3659;
  t3667 = t3665 + t3666;
  t3686 = -1.*t2060*t2313;
  t3687 = t3686 + t3540;
  t3689 = -1.*t2111*t2341;
  t3690 = t2105*t3687;
  t3691 = t3689 + t3690;
  t3693 = t2111*t3687;
  t3694 = t2356 + t3693;
  t3696 = t2152*t3691;
  t3697 = t2140*t3694;
  t3698 = t3696 + t3697;
  t3700 = t2140*t3691;
  t3701 = -1.*t2152*t3694;
  t3702 = t3700 + t3701;
  t3678 = -0.21*t2060;
  t3679 = -0.049*t2068;
  t3680 = t3678 + t3679;
  t3682 = 0.049*t2060;
  t3683 = t3682 + t2070;
  t3713 = t2008*t3255;
  t3714 = t1999*t3576;
  t3715 = t3713 + t3714;
  t3718 = -1.*t2068*t3715;
  t3719 = t3718 + t3592;
  t3721 = -1.*t2060*t3715;
  t3722 = t3721 + t3597;
  t3724 = -1.*t2111*t3719;
  t3725 = t2105*t3722;
  t3726 = t3724 + t3725;
  t3728 = t2105*t3719;
  t3729 = t2111*t3722;
  t3730 = t3728 + t3729;
  t3732 = t2152*t3726;
  t3733 = t2140*t3730;
  t3734 = t3732 + t3733;
  t3736 = t2140*t3726;
  t3737 = -1.*t2152*t3730;
  t3738 = t3736 + t3737;
  t3749 = t2008*t3082;
  t3750 = t1999*t3634;
  t3751 = t3749 + t3750;
  t3754 = -1.*t2068*t3751;
  t3755 = t3754 + t3646;
  t3757 = -1.*t2060*t3751;
  t3758 = t3757 + t3650;
  t3760 = -1.*t2111*t3755;
  t3761 = t2105*t3758;
  t3762 = t3760 + t3761;
  t3764 = t2105*t3755;
  t3765 = t2111*t3758;
  t3766 = t3764 + t3765;
  t3768 = t2152*t3762;
  t3769 = t2140*t3766;
  t3770 = t3768 + t3769;
  t3772 = t2140*t3762;
  t3773 = -1.*t2152*t3766;
  t3774 = t3772 + t3773;
  t3792 = -1.*t2105*t2348;
  t3793 = t3689 + t3792;
  t3796 = t2152*t3793;
  t3797 = t3796 + t2368;
  t3799 = t2140*t3793;
  t3800 = -1.*t2152*t2360;
  t3801 = t3799 + t3800;
  t3785 = 0.0016*t2105;
  t3786 = t3785 + t2127;
  t3788 = -0.2707*t2105;
  t3789 = -0.0016*t2111;
  t3790 = t3788 + t3789;
  t3813 = t2060*t3715;
  t3814 = t2068*t3589;
  t3815 = t3813 + t3814;
  t3817 = -1.*t2105*t3815;
  t3818 = t3724 + t3817;
  t3820 = -1.*t2111*t3815;
  t3821 = t3728 + t3820;
  t3823 = t2152*t3818;
  t3824 = t2140*t3821;
  t3825 = t3823 + t3824;
  t3827 = t2140*t3818;
  t3828 = -1.*t2152*t3821;
  t3829 = t3827 + t3828;
  t3841 = t2060*t3751;
  t3842 = t2068*t3643;
  t3843 = t3841 + t3842;
  t3845 = -1.*t2105*t3843;
  t3846 = t3760 + t3845;
  t3848 = -1.*t2111*t3843;
  t3849 = t3764 + t3848;
  t3851 = t2152*t3846;
  t3852 = t2140*t3849;
  t3853 = t3851 + t3852;
  t3855 = t2140*t3846;
  t3856 = -1.*t2152*t3849;
  t3857 = t3855 + t3856;
  t3876 = -1.*t2140*t2354;
  t3877 = t3876 + t3800;
  t2395 = t2187*t2370;
  t3868 = -0.7055*t2140;
  t3869 = 0.0184*t2152;
  t3870 = t3868 + t3869;
  t3872 = -0.0184*t2140;
  t3873 = t3872 + t2155;
  t3887 = t2111*t3719;
  t3888 = t2105*t3815;
  t3889 = t3887 + t3888;
  t3892 = -1.*t2152*t3889;
  t3893 = t3892 + t3824;
  t3895 = -1.*t2140*t3889;
  t3896 = t3895 + t3828;
  t3907 = t2111*t3755;
  t3908 = t2105*t3843;
  t3909 = t3907 + t3908;
  t3912 = -1.*t2152*t3909;
  t3913 = t3912 + t3852;
  t3915 = -1.*t2140*t3909;
  t3916 = t3915 + t3856;
  t3879 = -1.*t2198*t2370;
  t2396 = -1.*t2198*t2378;
  t2397 = t2395 + t2396;
  t3927 = 0.0216*t2187;
  t3928 = t3927 + t2216;
  t3930 = -1.1135*t2187;
  t3931 = -0.0216*t2198;
  t3932 = t3930 + t3931;
  t3898 = -1.*t2198*t3893;
  t3940 = t2140*t3889;
  t3941 = t2152*t3821;
  t3942 = t3940 + t3941;
  t3902 = t2187*t3893;
  t3918 = -1.*t2198*t3913;
  t3952 = t2140*t3909;
  t3953 = t2152*t3849;
  t3954 = t3952 + t3953;
  t3922 = t2187*t3913;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1727*t1852*t1854 + t1873*t1913 + t1939*t1956 + t1978*t1991 - 0.1305*(t1727*t1834*t1854 + t1797*t1991) + t2015*t2019 + t2044*t2054 + t2072*t2087 + t2096*t2101 + t2114*t2120 + t2129*t2137 + t2160*t2168 + t2181*t2185 + t2204*t2211 + t2219*t2224 + 0.0306*(t2198*t2211 + t2187*t2224) - 1.1312*(t2187*t2211 - 1.*t2198*t2224);
  p_output1[10]=t1727*t1852*t1905 + t1873*t2253 + t1939*t2259 + t1978*t2270 + t2015*t2279 - 0.1305*t2288 + t2044*t2298 + t2072*t2313 + t2096*t2329 + t2114*t2341 + t2129*t2348 + t2160*t2354 + t2181*t2360 + t2204*t2370 + t2219*t2378 + 0.0306*(t2198*t2370 + t2187*t2378) - 1.1312*t2397;
  p_output1[11]=0;
  p_output1[12]=t1727*t1873*t1887*t1905 - 1.*t1852*t1888*t1905 + t1727*t1905*t1909*t1939 + t1978*t2418 - 0.1305*(t1834*t1888*t1905 + t1797*t2418) + t2015*t2426 + t2044*t2443 + t2072*t2449 + t2096*t2458 + t2114*t2465 + t2129*t2476 + t2160*t2487 + t2181*t2496 + t2204*t2501 + t2219*t2522 + 0.0306*(t2198*t2501 + t2187*t2522) - 1.1312*(t2187*t2501 - 1.*t2198*t2522);
  p_output1[13]=t1727*t1854*t1873*t1887 - 1.*t1852*t1854*t1888 + t1727*t1854*t1909*t1939 + t1978*t2567 - 0.1305*(t1834*t1854*t1888 + t1797*t2567) + t2015*t2577 + t2044*t2595 + t2072*t2603 + t2096*t2613 + t2114*t2622 + t2129*t2629 + t2160*t2641 + t2181*t2647 + t2204*t2658 + t2219*t2665 + 0.0306*(t2198*t2658 + t2187*t2665) - 1.1312*(t2187*t2658 - 1.*t2198*t2665);
  p_output1[14]=-1.*t1727*t1852 - 1.*t1873*t1887*t1888 - 1.*t1888*t1909*t1939 + t1978*t2705 - 0.1305*(t1727*t1834 + t1797*t2705) + t2015*t2711 + t2044*t2731 + t2072*t2740 + t2096*t2747 + t2114*t2755 + t2129*t2762 + t2160*t2784 + t2181*t2800 + t2204*t2815 + t2219*t2827 + 0.0306*(t2198*t2815 + t2187*t2827) - 1.1312*(t2187*t2815 - 1.*t2198*t2827);
  p_output1[15]=t1939*t2253 + t1873*t2858 + t2015*t2867 - 0.1305*t1797*t2877 + t1978*t2877 + t1834*t2044*t2877 + t2072*t2889 + t2096*t2895 + t2114*t2905 + t2129*t2917 + t2160*t2922 + t2181*t2927 + t2204*t2939 + t2219*t2944 + 0.0306*(t2198*t2939 + t2187*t2944) - 1.1312*(t2187*t2939 - 1.*t2198*t2944);
  p_output1[16]=t1873*t1956 + t1939*t2980 + t2015*t2989 - 0.1305*t1797*t2997 + t1978*t2997 + t1834*t2044*t2997 + t2072*t3006 + t2096*t3014 + t2114*t3021 + t2129*t3028 + t2160*t3033 + t2181*t3038 + t2204*t3046 + t2219*t3053 + 0.0306*(t2198*t3046 + t2187*t3053) - 1.1312*(t2187*t3046 - 1.*t2198*t3053);
  p_output1[17]=-1.*t1727*t1873*t1909 + t1727*t1887*t1939 + t3079 + t3083 + t3085 + t3086 + t3096 + t3104 + t3113 + t3119 + t3126 + t3135 + t3140 + t3145 + t3152 + t3157;
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
  p_output1[39]=0.135*t1932*t2253 - 0.135*t1870*t2259 - 0.1305*t1797*t2279 + t1978*t2279 + t1834*t2044*t2279 + t2015*t3164 + t2072*t3179 + t2096*t3185 + t2114*t3192 + t2129*t3199 + t2160*t3205 + t2181*t3209 + t2204*t3215 + t2219*t3224 + 0.0306*(t2198*t3215 + t2187*t3224) - 1.1312*(t2187*t3215 - 1.*t2198*t3224);
  p_output1[40]=0.135*t1932*t2980 - 0.135*t1870*t3247 + t2015*t3251 - 0.1305*t1797*t3255 + t1978*t3255 + t1834*t2044*t3255 + t2072*t3263 + t2096*t3276 + t2114*t3281 + t2129*t3292 + t2160*t3298 + t2181*t3303 + t2204*t3309 + t2219*t3313 + 0.0306*(t2198*t3309 + t2187*t3313) - 1.1312*(t2187*t3309 - 1.*t2198*t3313);
  p_output1[41]=-0.135*t1727*t1870*t1909 + 0.135*t1727*t1887*t1932 + t3079 + t3083 + t3085 + t3086 + t3096 + t3104 + t3113 + t3119 + t3126 + t3135 + t3140 + t3145 + t3152 + t3157;
  p_output1[42]=-0.1305*(-1.*t1727*t1797*t1905 - 1.*t1834*t2270) + t2044*t2288 + t1999*t2072*t2288 - 1.*t2008*t2096*t2288 + t1727*t1905*t3340 + t2270*t3343 + t2114*t3358 + t2129*t3362 + t2160*t3366 + t2181*t3370 + t2204*t3376 + t2219*t3381 + 0.0306*(t2198*t3376 + t2187*t3381) - 1.1312*(t2187*t3376 - 1.*t2198*t3381);
  p_output1[43]=t1727*t1854*t3340 + t3343*t3398 - 0.1305*(t2048 - 1.*t1834*t3398) + t2044*t3403 + t1999*t2072*t3403 - 1.*t2008*t2096*t3403 + t2114*t3417 + t2129*t3422 + t2160*t3428 + t2181*t3432 + t2204*t3436 + t2219*t3444 + 0.0306*(t2198*t3436 + t2187*t3444) - 1.1312*(t2187*t3436 - 1.*t2198*t3444);
  p_output1[44]=-1.*t1888*t3340 + t3343*t3463 - 0.1305*(t1797*t1888 - 1.*t1834*t3463) + t2044*t3467 + t1999*t2072*t3467 - 1.*t2008*t2096*t3467 + t2114*t3477 + t2129*t3482 + t2160*t3489 + t2181*t3493 + t2204*t3497 + t2219*t3502 + 0.0306*(t2198*t3497 + t2187*t3502) - 1.1312*(t2187*t3497 - 1.*t2198*t3502);
  p_output1[45]=t2072*t2329 + t2279*t3520 + t2298*t3524 + t2096*t3528 + t2129*t3536 + t2114*t3541 + t2181*t3547 + t2160*t3551 + t2219*t3555 + t2204*t3559 - 1.1312*(-1.*t2198*t3555 + t2187*t3559) + 0.0306*(t2187*t3555 + t2198*t3559);
  p_output1[46]=t3255*t3520 + t3524*t3576 + t2096*t3583 + t2072*t3589 + t2129*t3593 + t2114*t3600 + t2181*t3606 + t2160*t3611 + t2219*t3615 + t2204*t3619 - 1.1312*(-1.*t2198*t3615 + t2187*t3619) + 0.0306*(t2187*t3615 + t2198*t3619);
  p_output1[47]=t3082*t3520 + t3524*t3634 + t2096*t3638 + t2072*t3643 + t2129*t3647 + t2114*t3651 + t2181*t3655 + t2160*t3659 + t2219*t3663 + t2204*t3667 - 1.1312*(-1.*t2198*t3663 + t2187*t3667) + 0.0306*(t2187*t3663 + t2198*t3667);
  p_output1[48]=t2129*t2341 + t2313*t3680 + t2329*t3683 + t2114*t3687 + t2181*t3691 + t2160*t3694 + t2219*t3698 + t2204*t3702 - 1.1312*(-1.*t2198*t3698 + t2187*t3702) + 0.0306*(t2187*t3698 + t2198*t3702);
  p_output1[49]=t3589*t3683 + t3680*t3715 + t2129*t3719 + t2114*t3722 + t2181*t3726 + t2160*t3730 + t2219*t3734 + t2204*t3738 - 1.1312*(-1.*t2198*t3734 + t2187*t3738) + 0.0306*(t2187*t3734 + t2198*t3738);
  p_output1[50]=t3643*t3683 + t3680*t3751 + t2129*t3755 + t2114*t3758 + t2181*t3762 + t2160*t3766 + t2219*t3770 + t2204*t3774 - 1.1312*(-1.*t2198*t3770 + t2187*t3774) + 0.0306*(t2187*t3770 + t2198*t3774);
  p_output1[51]=t2160*t2360 + t2341*t3786 + t2348*t3790 + t2181*t3793 + t2219*t3797 + t2204*t3801 - 1.1312*(-1.*t2198*t3797 + t2187*t3801) + 0.0306*(t2187*t3797 + t2198*t3801);
  p_output1[52]=t3719*t3786 + t3790*t3815 + t2181*t3818 + t2160*t3821 + t2219*t3825 + t2204*t3829 - 1.1312*(-1.*t2198*t3825 + t2187*t3829) + 0.0306*(t2187*t3825 + t2198*t3829);
  p_output1[53]=t3755*t3786 + t3790*t3843 + t2181*t3846 + t2160*t3849 + t2219*t3853 + t2204*t3857 - 1.1312*(-1.*t2198*t3853 + t2187*t3857) + 0.0306*(t2187*t3853 + t2198*t3857);
  p_output1[54]=t2219*t2370 + t2354*t3870 + t2360*t3873 + t2204*t3877 + 0.0306*(t2395 + t2198*t3877) - 1.1312*(t2187*t3877 + t3879);
  p_output1[55]=t3821*t3873 + t3870*t3889 + t2219*t3893 + t2204*t3896 - 1.1312*(t2187*t3896 + t3898) + 0.0306*(t2198*t3896 + t3902);
  p_output1[56]=t3849*t3873 + t3870*t3909 + t2219*t3913 + t2204*t3916 - 1.1312*(t2187*t3916 + t3918) + 0.0306*(t2198*t3916 + t3922);
  p_output1[57]=0.0306*t2397 - 1.1312*(-1.*t2187*t2378 + t3879) + t2370*t3928 + t2378*t3932;
  p_output1[58]=t3893*t3928 + t3932*t3942 - 1.1312*(t3898 - 1.*t2187*t3942) + 0.0306*(t3902 - 1.*t2198*t3942);
  p_output1[59]=t3913*t3928 + t3932*t3954 - 1.1312*(t3918 - 1.*t2187*t3954) + 0.0306*(t3922 - 1.*t2198*t3954);
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

#include "J_RightToeBottom_mex.hh"

namespace SymExpression
{

void J_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
