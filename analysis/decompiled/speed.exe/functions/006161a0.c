/* speed.exe 006161a0 FUN_006161a0; analysis pseudocode, not buildable source.
 * calls 00613eb0 FUN_00613eb0
 */

undefined4 FUN_006161a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_ESI;
  
  iVar3 = (*unaff_ESI - (int)unaff_ESI) + -0xc;
  if (iVar3 == 0) {
    return 0;
  }
  iVar1 = unaff_ESI[2];
  puVar2 = *(undefined4 **)(iVar1 + 8);
  *puVar2 = 4;
  uVar4 = FUN_00613eb0(iVar1,unaff_ESI + 3,iVar3);
  puVar2[1] = uVar4;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
  *unaff_ESI = (int)(unaff_ESI + 3);
  unaff_ESI[1] = unaff_ESI[1] + 1;
  return 1;
}

