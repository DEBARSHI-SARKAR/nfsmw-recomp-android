/* speed.exe 006a0aa0 FUN_006a0aa0; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 00623bc0 FUN_00623bc0
 */

undefined4 __thiscall FUN_006a0aa0(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087c6bf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = (**(code **)(param_1[0x13] + 8))();
  if ((param_2 <= iVar3) && (-1 < param_2)) {
    iVar3 = param_1[0x21];
    iVar4 = (**(code **)(*param_1 + 0x30))(param_2);
    if (iVar4 != 0) {
      param_1[0x61] = iVar4;
      param_1[0x62] = 0;
      piVar1 = (int *)param_1[0xd];
      cVar2 = (**(code **)(*piVar1 + 0x24))();
      if (cVar2 != '\0') {
        iVar5 = FUN_00627400(0x1c);
        uStack_4 = 0;
        if (iVar5 != 0) {
          FUN_00623bc0(piVar1[2],iVar4,param_3,iVar3,param_2);
        }
      }
      ExceptionList = pvStack_c;
      return 1;
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}

