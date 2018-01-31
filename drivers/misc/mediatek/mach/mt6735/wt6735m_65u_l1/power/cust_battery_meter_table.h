#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#endif

#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,67790},
        {-15,53460},
        {-10,42450},
        { -5,33930},
        {  0,27280},
        {  5,22070},
        { 10,17960},
        { 15,14700},
        { 20,12090},
        { 25,10000},
        { 30,8312},
        { 35,6942},
        { 40,5826},
        { 45,4911},
        { 50,4158},
        { 55,3536},
        { 60,3019}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
  {1,4337}, 
  {3,4315}, 
  {4,4294}, 
  {5,4278}, 
  {6,4263}, 
  {8,4248}, 
  {9,4233}, 
  {10,4219},
  {11,4206},
  {13,4193},
  {14,4180},
  {15,4168},
  {16,4156},
  {18,4143},
  {19,4129},
  {20,4116},
  {21,4104},
  {23,4092},
  {24,4085},
  {25,4077},
  {26,4067},
  {28,4049},
  {29,4023},
  {30,3996},
  {31,3976},
  {33,3961},
  {34,3948},
  {35,3938},
  {36,3928},
  {38,3920},
  {39,3914},
  {40,3905},
  {41,3899},
  {43,3889},
  {44,3880},
  {45,3871},
  {46,3864},
  {48,3856},
  {49,3849},
  {50,3842},
  {51,3835},
  {53,3829},
  {54,3823},
  {55,3817},
  {56,3813},
  {58,3808},
  {59,3803},
  {60,3798},
  {61,3794},
  {63,3791},
  {64,3787},
  {65,3785},
  {66,3783},
  {68,3780},
  {69,3779},
  {69,3776},
  {70,3775},
  {71,3771},
  {73,3768},
  {74,3765},
  {75,3762},
  {76,3759},
  {78,3755},
  {79,3750},
  {80,3746},
  {81,3740},
  {83,3735},
  {84,3729},
  {85,3723},
  {87,3715},
  {88,3706},
  {89,3700},
  {90,3695},
  {92,3691},
  {93,3687},
  {94,3681},
  {95,3667},
  {97,3634},
  {98,3579},
  {99,3502},
  {100,3400}	       
};      
        
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
	{0,4336},  
	{1,4306},  
	{3,4289},  
	{4,4273},  
	{5,4259},  
	{6,4244},  
	{8,4231},  
	{9,4217},  
	{10,4205}, 
	{12,4192}, 
	{13,4178}, 
	{14,4164}, 
	{15,4152}, 
	{17,4139}, 
	{18,4126}, 
	{19,4112}, 
	{20,4100}, 
	{22,4088}, 
	{23,4080}, 
	{24,4074}, 
	{26,4063}, 
	{27,4043}, 
	{28,4017}, 
	{29,3993}, 
	{31,3976}, 
	{32,3964}, 
	{33,3953}, 
	{35,3943}, 
	{36,3936}, 
	{37,3930}, 
	{38,3921}, 
	{40,3911}, 
	{41,3901}, 
	{42,3890}, 
	{43,3881}, 
	{45,3872}, 
	{46,3863}, 
	{47,3856}, 
	{49,3848}, 
	{50,3841}, 
	{51,3835}, 
	{52,3829}, 
	{54,3822}, 
	{55,3817}, 
	{56,3813}, 
	{58,3808}, 
	{59,3803}, 
	{60,3799}, 
	{61,3795}, 
	{63,3792}, 
	{64,3788}, 
	{65,3785}, 
	{66,3782}, 
	{68,3779}, 
	{69,3777}, 
	{70,3775}, 
	{72,3772}, 
	{73,3769}, 
	{74,3766}, 
	{75,3763}, 
	{77,3759}, 
	{78,3755}, 
	{79,3751}, 
	{81,3747}, 
	{82,3741}, 
	{83,3735}, 
	{84,3729}, 
	{86,3722}, 
	{87,3714}, 
	{88,3704}, 
	{89,3696}, 
	{91,3692}, 
	{92,3690}, 
	{93,3686}, 
	{95,3681}, 
	{96,3665}, 
	{97,3619}, 
	{98,3550}, 
	{100,3449},
	{100,3400},
	{100,3400} 
};           

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
	{0,4339},  
	{1,4319},  
	{3,4301},  
	{4,4285},  
	{5,4270},  
	{6,4256},  
	{8,4241},  
	{9,4226},  
	{10,4212}, 
	{11,4199}, 
	{13,4185}, 
	{14,4171}, 
	{15,4158}, 
	{17,4145}, 
	{18,4131}, 
	{19,4118}, 
	{20,4104}, 
	{22,4092}, 
	{23,4080}, 
	{24,4070}, 
	{25,4064}, 
	{27,4054}, 
	{28,4033}, 
	{29,4011}, 
	{31,3994}, 
	{32,3981}, 
	{33,3973}, 
	{34,3969}, 
	{36,3964}, 
	{37,3955}, 
	{38,3944}, 
	{39,3934}, 
	{41,3924}, 
	{42,3909}, 
	{43,3896}, 
	{45,3881}, 
	{46,3871}, 
	{47,3862}, 
	{48,3854}, 
	{50,3847}, 
	{51,3840}, 
	{52,3834}, 
	{53,3827}, 
	{55,3822}, 
	{56,3817}, 
	{57,3811}, 
	{58,3808}, 
	{60,3802}, 
	{61,3798}, 
	{62,3795}, 
	{64,3791}, 
	{65,3787}, 
	{66,3784}, 
	{67,3781}, 
	{69,3777}, 
	{70,3774}, 
	{71,3768}, 
	{72,3764}, 
	{74,3759}, 
	{75,3754}, 
	{76,3749}, 
	{78,3744}, 
	{79,3740}, 
	{80,3735}, 
	{81,3732}, 
	{83,3726}, 
	{84,3720}, 
	{85,3712}, 
	{86,3706}, 
	{88,3698}, 
	{89,3689}, 
	{90,3685}, 
	{92,3683}, 
	{93,3682}, 
	{94,3679}, 
	{95,3670}, 
	{97,3632}, 
	{98,3571}, 
	{99,3488}, 
	{100,3400},
	{100,3400} 
};     

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
	{0,4339}, 
	{1,4308}, 
	{3,4291}, 
	{4,4276}, 
	{5,4260}, 
	{6,4246}, 
	{8,4231}, 
	{9,4217}, 
	{10,4203},
	{11,4190},
	{13,4174},
	{14,4162},
	{15,4149},
	{17,4135},
	{18,4122},
	{19,4109},
	{20,4095},
	{22,4083},
	{23,4071},
	{24,4058},
	{25,4046},
	{27,4035},
	{28,4023},
	{29,4010},
	{30,3999},
	{32,3988},
	{33,3978},
	{34,3969},
	{36,3958},
	{37,3949},
	{38,3939},
	{39,3930},
	{41,3920},
	{42,3908},
	{43,3894},
	{44,3877},
	{46,3867},
	{47,3859},
	{48,3851},
	{50,3843},
	{51,3837},
	{52,3829},
	{53,3823},
	{55,3818},
	{56,3813},
	{57,3808},
	{58,3804},
	{60,3799},
	{61,3794},
	{62,3790},
	{63,3786},
	{65,3782},
	{66,3779},
	{67,3777},
	{69,3772},
	{70,3768},
	{71,3762},
	{72,3752},
	{74,3744},
	{75,3740},
	{76,3734},
	{77,3729},
	{79,3716},
	{80,3720},
	{81,3717},
	{83,3710},
	{84,3704},
	{85,3697},
	{86,3691},
	{88,3683},
	{89,3674},
	{90,3671},
	{91,3669},
	{93,3667},
	{94,3665},
	{95,3656},
	{96,3620},
	{98,3564},
	{99,3488},
	{100,3400},
	{100,3400}
};           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0} 
};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
	{710,4337},
	{710,4315},  
	{698,4294},  
	{698,4278},  
	{693,4263},  
	{683,4248},  
	{673,4233},  
	{665,4219},  
	{660,4206},  
	{658,4193},  
	{650,4180},  
	{645,4168},  
	{635,4156},  
	{625,4143},  
	{613,4129},  
	{600,4116},  
	{585,4104},  
	{575,4092},  
	{585,4085},  
	{593,4077},  
	{600,4067},  
	{588,4049},  
	{565,4023},  
	{540,3996},  
	{535,3976},  
	{528,3961},  
	{523,3948},  
	{520,3938},  
	{520,3928},  
	{525,3920},  
	{530,3914},  
	{528,3905},  
	{535,3899},  
	{533,3889},  
	{530,3880},  
	{533,3871},  
	{543,3864},  
	{545,3856},  
	{548,3849},  
	{550,3842},  
	{555,3835},  
	{555,3829},  
	{560,3823},  
	{565,3817},  
	{570,3813},  
	{578,3808},  
	{583,3803},  
	{585,3798},  
	{590,3794},  
	{598,3791},  
	{600,3787},  
	{608,3785},  
	{615,3783},  
	{623,3780},  
	{633,3779},  
	{638,3776},  
	{653,3775},  
	{660,3771},  
	{673,3768},  
	{683,3765},  
	{695,3762},  
	{713,3759},  
	{730,3755},  
	{743,3750},  
	{763,3746},  
	{783,3740},  
	{805,3735},  
	{833,3729},  
	{863,3723},  
	{893,3715},  
	{928,3706},  
	{970,3700},  
	{1025,3695}, 
	{1025,3691}, 
	{1025,3687}, 
	{1025,3681}, 
	{1025,3667}, 
	{1025,3634}, 
	{1025,3579}, 
	{1025,3502}, 
	{1025,3371}  
 };      

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
	{488,4336},
	{488,4306},
	{493,4289},
	{490,4273},
	{490,4259},
	{483,4244},
	{475,4231},
	{470,4217},
	{473,4205},
	{470,4192},
	{463,4178},
	{455,4164},
	{445,4152},
	{438,4139},
	{433,4126},
	{425,4112},
	{425,4100},
	{423,4088},
	{433,4080},
	{448,4074},
	{452,4063},
	{443,4043},
	{435,4017},
	{428,3993},
	{428,3976},
	{435,3964},
	{428,3953},
	{428,3943},
	{430,3936},
	{433,3930},
	{425,3921},
	{423,3911},
	{415,3901},
	{408,3890},
	{405,3881},
	{405,3872},
	{403,3863},
	{405,3856},
	{403,3848},
	{400,3841},
	{403,3835},
	{403,3829},
	{403,3822},
	{410,3817},
	{418,3813},
	{420,3808},
	{413,3803},
	{418,3799},
	{423,3795},
	{430,3792},
	{433,3788},
	{438,3785},
	{438,3782},
	{443,3779},
	{448,3777},
	{455,3775},
	{458,3772},
	{463,3769},
	{465,3766},
	{470,3763},
	{475,3759},
	{480,3755},
	{485,3751},
	{493,3747},
	{498,3741},
	{508,3735},
	{518,3729},
	{525,3722},
	{535,3714},
	{545,3704},
	{560,3696},
	{578,3692},
	{605,3690},
	{635,3686},
	{678,3681},
	{725,3665},
	{768,3619},
	{768,3550},
	{768,3449},
	{768,3400},
	{768,3400} 	      
};     

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
	{160,4339},
	{160,4319},
	{163,4301},
	{163,4285},
	{160,4270},
	{163,4256},
	{163,4241},
	{160,4226},
	{160,4212},
	{163,4199},
	{163,4185},
	{160,4171},
	{163,4158},
	{165,4145},
	{165,4131},
	{165,4118},
	{165,4104},
	{167,4092},
	{170,4080},
	{173,4070},
	{178,4064},
	{178,4054},
	{170,4033},
	{173,4011},
	{175,3994},
	{170,3981},
	{175,3973},
	{180,3969},
	{180,3964},
	{180,3955},
	{178,3944},
	{178,3934},
	{178,3924},
	{170,3909},
	{170,3896},
	{158,3881},
	{158,3871},
	{155,3862},
	{153,3854},
	{155,3847},
	{153,3840},
	{155,3834},
	{155,3827},
	{155,3822},
	{158,3817},
	{153,3811},
	{160,3808},
	{155,3802},
	{155,3798},
	{158,3795},
	{158,3791},
	{158,3787},
	{163,3784},
	{165,3781},
	{168,3777},
	{168,3774},
	{163,3768},
	{163,3764},
	{158,3759},
	{158,3754},
	{158,3749},
	{158,3744},
	{158,3740},
	{155,3735},
	{160,3732},
	{158,3726},
	{160,3720},
	{158,3712},
	{158,3706},
	{160,3698},
	{160,3689},
	{158,3685},
	{158,3683},
	{163,3682},
	{168,3679},
	{175,3670},
	{175,3632},
	{183,3571},
	{198,3488},
	{228,3400},
	{228,3400} 	      
}; 

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
	{150,4339},
	{150,4308},
	{150,4291},
	{153,4276},
	{150,4260},
	{148,4246},
	{150,4231},
	{150,4217},
	{150,4203},
	{155,4190},
	{150,4174},
	{153,4162},
	{155,4149},
	{153,4135},
	{155,4122},
	{155,4109},
	{152,4095},
	{152,4083},
	{155,4071},
	{155,4058},
	{153,4046},
	{158,4035},
	{157,4023},
	{158,4010},
	{158,3999},
	{158,3988},
	{158,3978},
	{160,3969},
	{158,3958},
	{163,3949},
	{165,3939},
	{168,3930},
	{168,3920},
	{165,3908},
	{165,3894},
	{153,3877},
	{153,3867},
	{155,3859},
	{153,3851},
	{150,3843},
	{150,3837},
	{148,3829},
	{150,3823},
	{150,3818},
	{150,3813},
	{150,3808},
	{155,3804},
	{153,3799},
	{153,3794},
	{153,3790},
	{153,3786},
	{153,3782},
	{155,3779},
	{160,3777},
	{158,3772},
	{158,3768},
	{155,3762},
	{148,3752},
	{148,3744},
	{153,3740},
	{168,3734},
	{153,3729},
	{133,3716},
	{153,3720},
	{153,3717},
	{153,3710},
	{153,3704},
	{153,3697},
	{155,3691},
	{153,3683},
	{150,3674},
	{153,3671},
	{153,3669},
	{158,3667},
	{185,3665},
	{173,3656},
	{160,3620},
	{163,3564},
	{175,3488},
	{195,3400},
	{195,3400} 
}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0},
 {0,0} 
};    

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H
