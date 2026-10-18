/* speed.exe 00606f00 FUN_00606f00; analysis pseudocode, not buildable source.
 */

void FUN_00606f00(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  int iVar3;
  int iStack_8;
  int iStack_4;
  
  iVar1 = param_1;
  iVar3 = *(int *)(param_1 + 0x38);
  param_1 = iVar3;
  (*(code *)unaff_ESI[1])(*unaff_ESI,&param_1,4,unaff_ESI[2]);
  if (0 < iVar3) {
    iVar2 = 0;
    param_1 = iVar3;
    do {
      iVar3 = *(int *)(iVar2 + *(int *)(iVar1 + 0x18));
      if ((iVar3 == 0) || (iStack_4 = iVar3 + 0x10, iStack_4 == 0)) {
        iStack_4 = 0;
        (*(code *)unaff_ESI[1])(*unaff_ESI,&iStack_4,4,unaff_ESI[2]);
      }
      else {
        iVar3 = *(int *)(iVar3 + 0xc) + 1;
        iStack_8 = iVar3;
        (*(code *)unaff_ESI[1])(*unaff_ESI,&iStack_8,4,unaff_ESI[2]);
        (*(code *)unaff_ESI[1])(*unaff_ESI,iStack_4,iVar3,unaff_ESI[2]);
      }
      iStack_4 = *(int *)(*(int *)(iVar1 + 0x18) + 4 + iVar2);
      (*(code *)unaff_ESI[1])(*unaff_ESI,&iStack_4,4,unaff_ESI[2]);
      iStack_4 = *(int *)(*(int *)(iVar1 + 0x18) + 8 + iVar2);
      (*(code *)unaff_ESI[1])(*unaff_ESI,&iStack_4,4,unaff_ESI[2]);
      iVar2 = iVar2 + 0xc;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

