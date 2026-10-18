/* speed.exe 006c1c00 FUN_006c1c00; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000da RegQueryValueExA
 * calls EXTERNAL:000000d7 RegOpenKeyExA
 * calls EXTERNAL:000000d8 RegCloseKey
 */

void FUN_006c1c00(void)

{
  LSTATUS LVar1;
  HKEY local_c;
  DWORD local_8 [2];
  
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,"Software\\EA Games\\Need for Speed Most Wanted",0,0x20019,
                        &local_c);
  if (LVar1 == 0) {
    local_8[1] = 4;
    local_8[0] = 4;
    RegQueryValueExA(local_c,"VERSION",(LPDWORD)0x0,local_8 + 1,(LPBYTE)&DAT_009017b0,local_8);
    local_8[0] = 4;
    local_8[1] = 4;
    RegQueryValueExA(local_c,"SIZE",(LPDWORD)0x0,local_8,(LPBYTE)&DAT_009017b4,local_8 + 1);
    local_8[0] = 4;
    local_8[1] = 4;
    RegQueryValueExA(local_c,"g_CarEnvironmentMapEnable",(LPDWORD)0x0,local_8,(LPBYTE)&DAT_009017b8,
                     local_8 + 1);
    local_8[0] = 4;
    local_8[1] = 4;
    RegQueryValueExA(local_c,"g_CarEnvironmentMapUpdateData",(LPDWORD)0x0,local_8,
                     (LPBYTE)&DAT_009017bc,local_8 + 1);
    local_8[0] = 4;
    local_8[1] = 4;
    RegQueryValueExA(local_c,"g_RoadReflectionEnable",(LPDWORD)0x0,local_8,(LPBYTE)&DAT_009017d4,
                     local_8 + 1);
    local_8[0] = 4;
    local_8[1] = 4;
    RegQueryValueExA(local_c,"g_MotionBlurEnable",(LPDWORD)0x0,local_8,(LPBYTE)&DAT_009017dc,
                     local_8 + 1);
    local_8[0] = 4;
    local_8[1] = 4;
    RegQueryValueExA(local_c,"g_ParticleSystemEnable",(LPDWORD)0x0,local_8,(LPBYTE)&DAT_009017ec,
                     local_8 + 1);
    local_8[0] = 4;
    local_8[1] = 4;
    RegQueryValueExA(local_c,"g_WorldLodLevel",(LPDWORD)0x0,local_8,(LPBYTE)&DAT_009017f4,
                     local_8 + 1);
    local_8[0] = 4;
    local_8[1] = 4;
    RegQueryValueExA(local_c,"g_CarLodLevel",(LPDWORD)0x0,local_8,(LPBYTE)&DAT_009017f8,local_8 + 1)
    ;
    local_8[0] = 4;
    local_8[1] = 4;
    RegQueryValueExA(local_c,"g_OverBrightEnable",(LPDWORD)0x0,local_8,(LPBYTE)&DAT_009017fc,
                     local_8 + 1);
    local_8[0] = 4;
    local_8[1] = 4;
    RegQueryValueExA(local_c,"g_FSAALevel",(LPDWORD)0x0,local_8,(LPBYTE)&DAT_00901808,local_8 + 1);
    local_8[0] = 4;
    local_8[1] = 4;
    RegQueryValueExA(local_c,"g_RainEnable",(LPDWORD)0x0,local_8,(LPBYTE)&DAT_00901810,local_8 + 1);
    local_8[0] = 4;
    local_8[1] = 4;
    RegQueryValueExA(local_c,"g_TextureFiltering",(LPDWORD)0x0,local_8,(LPBYTE)&DAT_00901818,
                     local_8 + 1);
    local_8[0] = 4;
    local_8[1] = 4;
    RegQueryValueExA(local_c,"g_RacingResolution",(LPDWORD)0x0,local_8,(LPBYTE)&DAT_0090181c,
                     local_8 + 1);
    local_8[0] = 4;
    local_8[1] = 4;
    RegQueryValueExA(local_c,"g_PerformanceLevel",(LPDWORD)0x0,local_8,(LPBYTE)&DAT_00982c00,
                     local_8 + 1);
    local_8[0] = 4;
    local_8[1] = 4;
    RegQueryValueExA(local_c,"g_VSyncOn",(LPDWORD)0x0,local_8,(LPBYTE)&DAT_00901824,local_8 + 1);
    local_8[0] = 4;
    local_8[1] = 4;
    RegQueryValueExA(local_c,"g_ShadowDetail",(LPDWORD)0x0,local_8,(LPBYTE)&DAT_00901830,local_8 + 1
                    );
    local_8[0] = 4;
    local_8[1] = 4;
    RegQueryValueExA(local_c,"g_VisualTreatment",(LPDWORD)0x0,local_8,(LPBYTE)&DAT_00901828,
                     local_8 + 1);
    local_8[0] = 4;
    local_8[1] = 4;
    RegQueryValueExA(local_c,"VTMode",(LPDWORD)0x0,local_8,(LPBYTE)&DAT_00982c78,local_8 + 1);
    RegCloseKey(local_c);
  }
  return;
}

