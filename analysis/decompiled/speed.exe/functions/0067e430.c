/* speed.exe 0067e430 FUN_0067e430; analysis pseudocode, not buildable source.
 * calls 0066f8a0 FUN_0066f8a0
 */

void FUN_0067e430(int param_1,int param_2,code *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 != param_2) && (iVar4 = param_1 + 0x18, iVar4 != param_2)) {
    iVar3 = param_1 + 0x30;
    do {
      cVar2 = (*param_3)(iVar4,param_1);
      if (cVar2 == '\0') {
        cVar2 = (*param_3)(iVar4,iVar3 + -0x30);
        iVar1 = iVar3 + -0x30;
        if (cVar2 != '\0') {
          do {
            iVar5 = iVar1;
            cVar2 = (*param_3)(iVar4,iVar5 + -0x18);
            iVar1 = iVar5 + -0x18;
          } while (cVar2 != '\0');
          if ((iVar5 != iVar4) && (iVar4 != iVar3)) {
            FUN_0066f8a0(iVar5,iVar4,iVar3,0,0);
          }
        }
      }
      else if ((param_1 != iVar4) && (iVar4 != iVar3)) {
        FUN_0066f8a0(param_1,iVar4,iVar3,0,0);
      }
      iVar4 = iVar4 + 0x18;
      iVar3 = iVar3 + 0x18;
    } while (iVar4 != param_2);
  }
  return;
}

