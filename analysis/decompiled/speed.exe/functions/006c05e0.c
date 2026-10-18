/* speed.exe 006c05e0 FUN_006c05e0; analysis pseudocode, not buildable source.
 * calls 006c0450 FUN_006c0450
 */

void FUN_006c05e0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puStack_7c;
  int *piStack_78;
  undefined4 *puStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int *piStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 local_2c [44];
  
  puStack_34 = local_2c;
  uStack_30 = 0;
  uStack_38 = 1;
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_44 = 0x15;
  uStack_48 = DAT_00982be8;
  uStack_4c = DAT_00982be4;
  piStack_50 = DAT_00982bdc;
  uStack_54 = 0x6c060b;
  iVar1 = (**(code **)(*DAT_00982bdc + 0x70))();
  if (iVar1 == 0) {
    uStack_54 = 0;
    uStack_58 = 0;
    piStack_5c = piStack_50;
    uStack_60 = 0;
    uStack_64 = DAT_00982a28;
    piStack_68 = DAT_00982bdc;
    uStack_6c = 0x6c062e;
    iVar1 = (**(code **)(*DAT_00982bdc + 0x88))();
    if (iVar1 == 0) {
      uStack_6c = 0x10;
      uStack_70 = 0;
      puStack_74 = &uStack_64;
      piStack_78 = piStack_68;
      puStack_7c = (undefined4 *)0x6c0644;
      iVar1 = (**(code **)(*piStack_68 + 0x34))();
      piVar2 = piStack_78;
      if (iVar1 == 0) {
        puStack_7c = &uStack_6c;
        (**(code **)(*piStack_78 + 0x30))();
        if ((0x14 < (int)puStack_74) && ((int)puStack_74 < 0x17)) {
          FUN_006c0450(&puStack_74,&puStack_7c,piStack_50);
        }
        (**(code **)(*piVar2 + 0x38))();
        (**(code **)(*piVar2 + 8))(piVar2);
      }
    }
  }
  return;
}

