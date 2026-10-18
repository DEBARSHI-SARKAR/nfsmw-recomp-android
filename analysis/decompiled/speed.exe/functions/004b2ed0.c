/* speed.exe 004b2ed0 FUN_004b2ed0; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls 004b2a30 FUN_004b2a30
 * calls 004b2650 FUN_004b2650
 * calls 004b26b0 FUN_004b26b0
 */

undefined4 FUN_004b2ed0(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_1 != (int *)0x0) && (param_1 = (int *)*param_1, *param_1 == 0x4d525453)) {
    puVar2 = (undefined4 *)FUN_004b2650();
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    puVar2[4] = 0;
    _strncpy((char *)(puVar2 + 5),param_2,0x103);
    puVar2[0x47] = param_3;
    puVar2[0x48] = param_4;
    FUN_004b26b0();
    FUN_007ec1bd();
    iVar1 = param_1[0x11];
    if (iVar1 == 0) {
      param_1[0x11] = 1;
    }
    FUN_007ec1c8();
    if (iVar1 == 0) {
      if (param_1[0x15] != 0) {
        FUN_004b2a30(param_1,param_1[0x13]);
        return *puVar2;
      }
      FUN_004b2a30(param_1,param_1[0x12]);
    }
    return *puVar2;
  }
  return 0;
}

