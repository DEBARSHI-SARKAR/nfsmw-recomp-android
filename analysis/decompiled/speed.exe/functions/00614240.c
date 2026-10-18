/* speed.exe 00614240 FUN_00614240; analysis pseudocode, not buildable source.
 * calls 00613880 FUN_00613880
 */

uint FUN_00614240(void)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  undefined4 *unaff_EBX;
  uint uVar4;
  int local_4;
  
  iVar1 = *(int *)unaff_EBX[1];
  *(int *)unaff_EBX[1] = iVar1 + -1;
  if (iVar1 == 0) {
    piVar2 = (int *)unaff_EBX[1];
    pbVar3 = (byte *)(*(code *)piVar2[2])(0,piVar2[3],&local_4);
    if ((pbVar3 == (byte *)0x0) || (local_4 == 0)) {
      uVar4 = 0xffffffff;
    }
    else {
      piVar2[1] = (int)pbVar3;
      *piVar2 = local_4 + -1;
      uVar4 = (uint)*pbVar3;
      piVar2[1] = (int)(pbVar3 + 1);
    }
  }
  else {
    pbVar3 = *(byte **)(unaff_EBX[1] + 4);
    uVar4 = (uint)*pbVar3;
    *(byte **)(unaff_EBX[1] + 4) = pbVar3 + 1;
  }
  if (uVar4 == 0xffffffff) {
    FUN_00613880(*unaff_EBX,"unexpected end of file in %s",unaff_EBX[4]);
  }
  return uVar4;
}

