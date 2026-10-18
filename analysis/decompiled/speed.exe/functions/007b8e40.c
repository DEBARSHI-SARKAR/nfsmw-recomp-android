/* speed.exe 007b8e40 FUN_007b8e40; analysis pseudocode, not buildable source.
 * calls 0045d3a0 FUN_0045d3a0
 * calls 007b7080 FUN_007b7080
 * calls 007aeca0 FUN_007aeca0
 * calls 00516c90 FUN_00516c90
 * calls 00525940 FUN_00525940
 */

void __thiscall
FUN_007b8e40(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0045d3a0(0);
  if ((iVar1 != param_1[0x3b]) || (param_2 != 0x406415e3)) {
    FUN_007b7080(param_2,param_3,param_4,param_5);
    if (param_2 == 0x5a928018) {
      iVar1 = (**(code **)(*param_1 + 0x18))();
      if (iVar1 != 0) {
        iVar2 = FUN_007aeca0(iVar1);
        if (iVar2 == 0) {
          *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xf;
          (**(code **)(*param_1 + 0xc))();
        }
      }
    }
    else {
      if (param_2 == -0x6ee54c9c) {
        FUN_00516c90(0x587c018b,param_1[4],0);
        return;
      }
      if (param_2 == -0x1e021e2f) {
        FUN_00525940(PTR_s_CustomizeCategory_fng_00905ea8,param_1[0x52] << 0x10 | param_1[0x53],0,0)
        ;
        return;
      }
    }
  }
  return;
}

