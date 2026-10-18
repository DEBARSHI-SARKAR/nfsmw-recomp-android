/* speed.exe 00584800 FUN_00584800; analysis pseudocode, not buildable source.
 * calls 00583e20 FUN_00583e20
 * calls 00583930 FUN_00583930
 * calls 00583440 FUN_00583440
 * calls 00584310 FUN_00584310
 */

undefined4
FUN_00584800(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00583440(param_5,param_6,param_7,param_2,param_3,param_4,4,
                       *(undefined4 *)(param_1 + 0x4c));
  if (iVar1 != 0) {
    iVar1 = FUN_00583930(param_2,param_3,param_4,param_5,param_6,param_7,iVar1,
                         *(undefined4 *)(param_1 + 0x40));
    if (iVar1 != 0) {
      iVar1 = FUN_00583e20(param_5,param_6,param_7,param_2,param_3,param_4,iVar1,
                           *(undefined4 *)(param_1 + 0x44));
      if (iVar1 != 0) {
        uVar2 = FUN_00584310(param_2,param_3,param_4,param_5,param_6,param_7,iVar1,
                             *(undefined4 *)(param_1 + 0x48));
        return uVar2;
      }
    }
  }
  return 0;
}

