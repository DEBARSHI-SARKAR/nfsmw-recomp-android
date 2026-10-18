/* speed.exe 00502520 FUN_00502520; analysis pseudocode, not buildable source.
 * calls 00502130 FUN_00502130
 * calls 004fc530 FUN_004fc530
 */

undefined4
FUN_00502520(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((param_1 != (undefined4 *)0x0) && (param_3 != 0)) && (param_2 != 0)) {
    puVar2 = param_1;
    for (iVar1 = 0x4c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    FUN_004fc530(param_1,param_3,param_4,param_5);
    FUN_00502130(param_1,param_2,param_3 + 0x30,param_3,param_4,param_6);
    return 1;
  }
  return 0;
}

