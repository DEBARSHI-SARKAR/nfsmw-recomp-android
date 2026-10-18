/* speed.exe 00607030 FUN_00607030; analysis pseudocode, not buildable source.
 */

void FUN_00607030(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  int iVar3;
  int local_8;
  int local_4;
  
  iVar3 = *(int *)(param_1 + 0x24);
  local_8 = iVar3;
  local_4 = iVar3;
  (*(code *)unaff_ESI[1])(*unaff_ESI,&local_8,4,unaff_ESI[2]);
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 * 4);
      if ((iVar1 == 0) || (iVar1 + 0x10 == 0)) {
        local_8 = 0;
        (*(code *)unaff_ESI[1])(*unaff_ESI,&local_8,4,unaff_ESI[2]);
      }
      else {
        iVar3 = *(int *)(iVar1 + 0xc) + 1;
        local_8 = iVar3;
        (*(code *)unaff_ESI[1])(*unaff_ESI,&local_8,4,unaff_ESI[2]);
        (*(code *)unaff_ESI[1])(*unaff_ESI,iVar1 + 0x10,iVar3,unaff_ESI[2]);
        iVar3 = local_4;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  return;
}

