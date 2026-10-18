/* speed.exe 00645940 FUN_00645940; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 006451a0 FUN_006451a0
 */

int * FUN_00645940(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00879d1f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_005d29d0(0x30,0);
  local_4 = 0;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    iVar1 = *(int *)(param_3 + 0xc);
    if ((*(byte *)(param_3 + 4) & 2) != 0) {
      iVar1 = iVar1 + param_3;
    }
    piVar2 = (int *)FUN_006451a0(param_1,param_2,iVar1,param_4,param_5);
  }
  pvVar3 = (void *)0x2;
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x34))(DAT_00920460,param_4,0);
  ExceptionList = pvVar3;
  return piVar2;
}

