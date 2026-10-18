/* speed.exe 005192f0 FUN_005192f0; analysis pseudocode, not buildable source.
 * calls 00660270 FUN_00660270
 * calls 00660200 FUN_00660200
 * calls 00660320 FUN_00660320
 * calls 0064c9a0 FUN_0064c9a0
 */

undefined4
FUN_005192f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0064c9a0();
  if (iVar1 != 0) {
    FUN_00660200(0x11,8,9);
  }
  FUN_00660320(param_1,9);
  iVar1 = FUN_00660270(param_2,0x20,9);
  iVar2 = FUN_00660270(param_3,0x20,9);
  uVar3 = 1;
  if ((iVar1 == 8) && (iVar2 == *(int *)(DAT_0091cb20 + 0xc0))) {
    *param_5 = *(undefined4 *)(DAT_0091cb20 + 0x44);
    *param_4 = DAT_0091cb20 + 0x54;
    uVar3 = 0;
  }
  return uVar3;
}

