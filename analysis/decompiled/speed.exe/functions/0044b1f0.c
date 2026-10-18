/* speed.exe 0044b1f0 FUN_0044b1f0; analysis pseudocode, not buildable source.
 * calls 00491350 FUN_00491350
 * calls 00447bd0 FUN_00447bd0
 * calls 004a91a0 FUN_004a91a0
 */

undefined4 __thiscall FUN_0044b1f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = (*(code *)PTR_FUN_008ee4d0)(0x30,0);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004a91a0(param_2,param_3,0);
    }
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    *(undefined4 *)(param_1 + 0x20) = param_3;
    *(undefined4 *)(param_1 + 0x18) = 1;
    FUN_00447bd0();
  }
  return 0;
}

