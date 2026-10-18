/* speed.exe 006cfce0 FUN_006cfce0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006cfce0(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,7,1);
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xe,1);
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0x17,4);
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0x19,5);
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0x1d,1);
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0x89,0);
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0x1c,0);
  DAT_008fae6c = 2;
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xa8,0xf);
  uVar2 = 0;
  if (DAT_0093d9ac != 0) {
    do {
      if (((DAT_00901818 < 2) || (DAT_00901818 != 2)) || ((DAT_0093d958 & 0x400) == 0)) {
        cVar1 = '\x02';
      }
      else {
        cVar1 = (DAT_0093d898 != 0x102b) + '\x02';
      }
      (**(code **)(*DAT_00982bdc + 0x114))(DAT_00982bdc,uVar2,6,cVar1);
      if (((DAT_00901818 < 2) || (DAT_00901818 != 2)) || ((DAT_0093d958 & 0x4000000) == 0)) {
        cVar1 = '\x02';
      }
      else {
        cVar1 = (DAT_0093d898 != 0x102b) + '\x02';
      }
      (**(code **)(*DAT_00982bdc + 0x114))(DAT_00982bdc,uVar2,5,cVar1);
      (**(code **)(*DAT_00982bdc + 0x114))(DAT_00982bdc,uVar2,7,(DAT_00901818 != 0) + '\x01');
      uVar3 = DAT_0093d984;
      if (DAT_00901818 != 2) {
        uVar3 = 1;
      }
      (**(code **)(*DAT_00982bdc + 0x114))(DAT_00982bdc,uVar2,10,uVar3);
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_0093d9ac);
  }
  if ((DAT_008f921c == 0) || (DAT_00901808 < 1)) {
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xa1,0);
  }
  else {
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xa1,1);
  }
  uVar2 = 0;
  if (DAT_0093d9ac != 0) {
    do {
      (**(code **)(*DAT_00982bdc + 0x10c))(DAT_00982bdc,uVar2,1,1);
      (**(code **)(*DAT_00982bdc + 0x10c))(DAT_00982bdc,uVar2,4,1);
      (**(code **)(*DAT_00982bdc + 0x10c))(DAT_00982bdc,uVar2,0x18,0);
      (**(code **)(*DAT_00982bdc + 0x10c))(DAT_00982bdc,uVar2,0xb,uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_0093d9ac);
  }
  (**(code **)(**(int **)(DAT_0093de78 + 0x48) + 0x68))
            (*(int **)(DAT_0093de78 + 0x48),*(undefined4 *)(*(int *)(DAT_0093de78 + 0x44) + 0x18c),7
            );
  DAT_00982cb4 = 0;
  DAT_00982cb8 = 0;
  DAT_00982cbc = 0;
  DAT_00982cc0 = 0;
  _DAT_00982cc4 = 0;
  return;
}

