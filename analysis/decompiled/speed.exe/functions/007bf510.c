/* speed.exe 007bf510 FUN_007bf510; analysis pseudocode, not buildable source.
 * calls 00515960 FUN_00515960
 * calls 007aade0 FUN_007aade0
 * calls 00524850 FUN_00524850
 * calls 007ba5c0 FUN_007ba5c0
 * calls 007ab370 FUN_007ab370
 * calls 00524920 FUN_00524920
 * calls 0054e760 FUN_0054e760
 * calls 00516c90 FUN_00516c90
 * calls 0056dbe0 FUN_0056dbe0
 * calls 00515990 FUN_00515990
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_007bf510(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00515960(&local_4,&local_8);
  uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x82cf6fad);
  cVar1 = FUN_0054e760(local_4,local_8,uVar2);
  if (cVar1 != '\0') {
    FUN_00515990(&local_c);
    if (_DAT_00890968 <= local_c) {
      if (_DAT_00890968 < local_c) {
        FUN_00516c90(0x18c32a,*(undefined4 *)(param_1 + 0x10),0);
        FUN_007ab370(0xffffffff);
      }
      return 1;
    }
    FUN_00516c90(0x39feffd,*(undefined4 *)(param_1 + 0x10),0);
    FUN_007ab370(1);
    return 1;
  }
  uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x2c077a9c);
  cVar1 = FUN_0054e760(local_4,local_8,uVar2);
  if (cVar1 != '\0') {
    FUN_00515990(&local_c);
    if (_DAT_00890968 <= local_c) {
      if (local_c <= _DAT_00890968) {
        return 1;
      }
      FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x91c4a50,0xe647b375,1);
      iVar3 = FUN_0056dbe0(0xb);
      if (*(char *)(iVar3 + 0xd) == '\0') {
        cVar1 = '\x03';
      }
      else {
        cVar1 = *(char *)(iVar3 + 0xd) + -1;
      }
    }
    else {
      FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x2d145be3,0xe647b375,1);
      iVar3 = FUN_0056dbe0(0xb);
      if (*(char *)(iVar3 + 0xd) == '\x03') {
        cVar1 = '\0';
      }
      else {
        cVar1 = *(char *)(iVar3 + 0xd) + '\x01';
      }
    }
    iVar3 = FUN_0056dbe0(0xb);
    *(char *)(iVar3 + 0xd) = cVar1;
    FUN_007ba5c0();
    FUN_007aade0();
    return 1;
  }
  return 0;
}

