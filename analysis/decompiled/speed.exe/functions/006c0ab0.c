/* speed.exe 006c0ab0 FUN_006c0ab0; analysis pseudocode, not buildable source.
 * calls 00506af0 FUN_00506af0
 * calls 00728ce0 FUN_00728ce0
 * calls 00728c90 FUN_00728c90
 * calls 00505340 FUN_00505340
 * calls 00501480 FUN_00501480
 * calls 006bef90 FUN_006bef90
 */

undefined4 FUN_006c0ab0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 1;
  }
  iVar1 = FUN_00505340(param_3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00506af0(param_3);
  *param_2 = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f800000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3f800000;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0x3f800000;
  iVar1 = FUN_00728ce0(param_3);
  if (iVar1 != 0) {
    FUN_006bef90(param_2);
    iVar1 = FUN_00728c90(param_3);
    piVar2 = (int *)(iVar1 + 0x28);
    iVar1 = 4;
    do {
      if (*piVar2 != 0) {
        FUN_00501480();
      }
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 1;
}

