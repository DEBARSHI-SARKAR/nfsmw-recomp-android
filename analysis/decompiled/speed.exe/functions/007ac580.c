/* speed.exe 007ac580 FUN_007ac580; analysis pseudocode, not buildable source.
 * calls 00515c00 FUN_00515c00
 * calls 0056dbe0 FUN_0056dbe0
 */

void __fastcall FUN_007ac580(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0) &&
     ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0)) {
    iVar2 = FUN_0056dbe0(0xb);
    cVar1 = *(char *)(iVar2 + 5);
  }
  else {
    cVar1 = *(char *)(DAT_0091cf90 + 0x191);
  }
  if (cVar1 == '\0') {
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    uVar4 = 0xde6eff34;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    uVar4 = 0xa1cd823e;
  }
  FUN_00515c00(uVar3,uVar4);
  FUN_00515c00(*(undefined4 *)(param_1 + 0x2c),0xa88ffeb4);
  return;
}

