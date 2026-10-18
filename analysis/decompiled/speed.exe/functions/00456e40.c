/* speed.exe 00456e40 FUN_00456e40; analysis pseudocode, not buildable source.
 * calls 00659250 FUN_00659250
 * calls 00456300 FUN_00456300
 */

void __thiscall FUN_00456e40(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_retaddr;
  
  uVar3 = param_3;
  iVar1 = param_1[1];
  param_3 = CONCAT31(param_3._1_3_,~*(byte *)(param_1 + 3)) & 0xffffff01;
  iVar2 = *param_1;
  param_1[2] = 0;
  param_1[3] = param_1[3] & 1;
  param_1[1] = uVar3 / 0xc;
  if (param_2 == 0) {
    param_1[3] = 0;
    iVar4 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)((uVar3 / 0xc) * 0xc,0);
    *param_1 = iVar4;
    FUN_00456300(iVar2,iVar1,unaff_retaddr);
    return;
  }
  param_1[3] = 1;
  *param_1 = param_2;
  FUN_00456300(iVar2,iVar1,param_3);
  return;
}

