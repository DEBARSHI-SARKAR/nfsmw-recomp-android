/* speed.exe 00614510 FUN_00614510; analysis pseudocode, not buildable source.
 * calls 00608510 FUN_00608510
 * calls 00614450 FUN_00614450
 * calls 00613880 FUN_00613880
 * calls 00613970 FUN_00613970
 * calls 00613eb0 FUN_00613eb0
 */

void FUN_00614510(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *unaff_EBX;
  uint uVar5;
  
  uVar2 = FUN_00614450();
  if (uVar2 == 0) {
    return;
  }
  puVar1 = (undefined4 *)unaff_EBX[2];
  if ((uint)puVar1[1] < uVar2) {
    uVar5 = uVar2;
    if (uVar2 < 0x20) {
      uVar5 = 0x20;
    }
    uVar3 = FUN_00613970(*unaff_EBX,*puVar1,puVar1[1],uVar5,1);
    *puVar1 = uVar3;
    puVar1[1] = uVar5;
  }
  uVar3 = *puVar1;
  iVar4 = FUN_00608510(unaff_EBX[1],uVar3,uVar2);
  if (iVar4 != 0) {
    FUN_00613880(*unaff_EBX,"unexpected end of file in %s",unaff_EBX[4]);
  }
  FUN_00613eb0(*unaff_EBX,uVar3,uVar2 - 1);
  return;
}

