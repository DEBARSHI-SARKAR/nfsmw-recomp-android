/* speed.exe 006c1f10 FUN_006c1f10; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000d7 RegOpenKeyExA
 * calls EXTERNAL:000000d9 RegSetValueExA
 * calls EXTERNAL:000000d8 RegCloseKey
 * calls EXTERNAL:000000d6 RegCreateKeyA
 */

void FUN_006c1f10(void)

{
  LSTATUS LVar1;
  HKEY local_4;
  
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,"Software\\EA Games\\Need for Speed Most Wanted",0,0xf003f,
                        &local_4);
  if (LVar1 != 0) {
    RegCreateKeyA((HKEY)0x80000002,"Software\\EA Games\\Need for Speed Most Wanted",&local_4);
    LVar1 = RegOpenKeyExA((HKEY)0x80000002,"Software\\EA Games\\Need for Speed Most Wanted",0,
                          0xf003f,&local_4);
    if (LVar1 != 0) {
      return;
    }
  }
  RegSetValueExA(local_4,"VERSION",0,4,(BYTE *)&DAT_009017b0,4);
  RegSetValueExA(local_4,"SIZE",0,4,(BYTE *)&DAT_009017b4,4);
  RegSetValueExA(local_4,"g_CarEnvironmentMapEnable",0,4,(BYTE *)&DAT_009017b8,4);
  RegSetValueExA(local_4,"g_CarEnvironmentMapUpdateData",0,4,(BYTE *)&DAT_009017bc,4);
  RegSetValueExA(local_4,"g_RoadReflectionEnable",0,4,(BYTE *)&DAT_009017d4,4);
  RegSetValueExA(local_4,"g_MotionBlurEnable",0,4,(BYTE *)&DAT_009017dc,4);
  RegSetValueExA(local_4,"g_ParticleSystemEnable",0,4,(BYTE *)&DAT_009017ec,4);
  RegSetValueExA(local_4,"g_WorldLodLevel",0,4,(BYTE *)&DAT_009017f4,4);
  RegSetValueExA(local_4,"g_CarLodLevel",0,4,(BYTE *)&DAT_009017f8,4);
  RegSetValueExA(local_4,"g_OverBrightEnable",0,4,(BYTE *)&DAT_009017fc,4);
  RegSetValueExA(local_4,"g_FSAALevel",0,4,(BYTE *)&DAT_00901808,4);
  RegSetValueExA(local_4,"g_RainEnable",0,4,(BYTE *)&DAT_00901810,4);
  RegSetValueExA(local_4,"g_TextureFiltering",0,4,(BYTE *)&DAT_00901818,4);
  RegSetValueExA(local_4,"g_RacingResolution",0,4,(BYTE *)&DAT_0090181c,4);
  RegSetValueExA(local_4,"FirstTime",0,4,(BYTE *)&DAT_00901820,4);
  RegSetValueExA(local_4,"g_PerformanceLevel",0,4,(BYTE *)&DAT_00982c00,4);
  RegSetValueExA(local_4,"g_VSyncOn",0,4,(BYTE *)&DAT_00901824,4);
  RegSetValueExA(local_4,"g_ShadowDetail",0,4,(BYTE *)&DAT_00901830,4);
  RegSetValueExA(local_4,"g_VisualTreatment",0,4,(BYTE *)&DAT_00901828,4);
  RegCloseKey(local_4);
  return;
}

