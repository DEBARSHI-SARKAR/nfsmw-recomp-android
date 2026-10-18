/* speed.exe 006bcdc0 FUN_006bcdc0; analysis pseudocode, not buildable source.
 */

void FUN_006bcdc0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = 0;
  puStack_1c = &DAT_00982a6c;
  if (DAT_009017d4 == 0) {
    uVar2 = 1;
    uStack_20 = 1;
    uStack_24 = DAT_008f9000;
    puStack_28 = (undefined4 *)0x0;
    uStack_2c = 1;
    iVar1 = (**(code **)(*DAT_00982bdc + 0x5c))(DAT_00982bdc,1,1);
    if (iVar1 != 0) goto LAB_006bce8d;
    iVar1 = (**(code **)(*DAT_00982a6c + 0x4c))(DAT_00982a6c,0,&uStack_2c,0,0);
    uVar3 = uVar2;
    if (iVar1 == 0) {
      *puStack_28 = 0xffffffff;
      (**(code **)(*DAT_00982a6c + 0x50))(DAT_00982a6c,0);
      uVar3 = 1;
    }
  }
  else {
    uStack_20 = 0;
    uStack_24 = DAT_008f9000;
    puStack_28 = (undefined4 *)0x1;
    uStack_2c = 1;
    uVar2 = 0x140;
    iVar1 = (**(code **)(*DAT_00982bdc + 0x5c))(DAT_00982bdc,0x140,0xf0);
    uVar3 = 0xf0;
    if (iVar1 != 0) goto LAB_006bce8d;
  }
  iVar1 = (**(code **)(*DAT_00982a6c + 0x48))(DAT_00982a6c,0,&DAT_00982a68);
  if ((iVar1 == 0) &&
     (iVar1 = (**(code **)(*DAT_00982bdc + 0x74))
                        (DAT_00982bdc,uVar2,uVar3,DAT_008f9004,0,0,0,&DAT_00982a78,0), iVar1 == 0))
  {
    if (DAT_0090185c != 3) {
      return;
    }
    if (DAT_009017d4 == 0) {
      return;
    }
    iVar1 = (**(code **)(*DAT_00982bdc + 0x5c))
                      (DAT_00982bdc,uVar2,uVar3,1,1,DAT_008f9000,0,&DAT_00982a74,0);
    if ((iVar1 == 0) &&
       (iVar1 = (**(code **)(*DAT_00982a74 + 0x48))(DAT_00982a74,0,&DAT_00982a70), iVar1 == 0)) {
      return;
    }
  }
LAB_006bce8d:
  DAT_009017d4 = 0;
  DAT_0090185c = 0;
  if (DAT_00982a6c != (int *)0x0) {
    (**(code **)(*DAT_00982a6c + 8))(DAT_00982a6c);
    DAT_00982a6c = (int *)0x0;
  }
  if (DAT_00982a68 != (int *)0x0) {
    (**(code **)(*DAT_00982a68 + 8))(DAT_00982a68);
    DAT_00982a68 = (int *)0x0;
  }
  if (DAT_00982a78 != (int *)0x0) {
    (**(code **)(*DAT_00982a78 + 8))(DAT_00982a78);
    DAT_00982a78 = (int *)0x0;
  }
  if (DAT_00982a74 != (int *)0x0) {
    (**(code **)(*DAT_00982a74 + 8))(DAT_00982a74);
    DAT_00982a74 = (int *)0x0;
  }
  if (DAT_00982a70 != (int *)0x0) {
    (**(code **)(*DAT_00982a70 + 8))(DAT_00982a70);
    DAT_00982a70 = (int *)0x0;
  }
  return;
}

