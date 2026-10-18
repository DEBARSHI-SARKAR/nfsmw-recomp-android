/* speed.exe 007887c0 FUN_007887c0; analysis pseudocode, not buildable source.
 * calls 00787c90 FUN_00787c90
 * calls 0045f150 FUN_0045f150
 * calls 0045f140 FUN_0045f140
 * calls 0076d320 FUN_0076d320
 * calls 00463c70 FUN_00463c70
 */

int __thiscall
FUN_007887c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008823db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0076d320(param_2);
  iVar2 = FUN_0045f140(DAT_009b38f0);
  if (iVar2 == 0) {
    iVar2 = FUN_0045f150(DAT_009b38ec);
    if (1 < iVar2) {
      iVar2 = FUN_00463c70(DAT_009b38f0);
      local_4 = 0;
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_00787c90(param_2,param_3,param_4,param_5);
      }
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(iVar2 + 4);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      *puVar1 = piVar3;
      *(int **)(param_1 + 0x50) = piVar3;
      piVar3[1] = (int)puVar1;
      *piVar3 = param_1 + 0x4c;
      ExceptionList = local_c;
      return iVar2;
    }
  }
  ExceptionList = local_c;
  return 0;
}

