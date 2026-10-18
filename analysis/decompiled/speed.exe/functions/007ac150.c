/* speed.exe 007ac150 FUN_007ac150; analysis pseudocode, not buildable source.
 * calls 00515c00 FUN_00515c00
 * calls 0056dbe0 FUN_0056dbe0
 */

void __fastcall FUN_007ac150(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar2 = FUN_0056dbe0(0xb);
  cVar1 = *(char *)(iVar2 + 8);
  if (cVar1 == '\0') {
    uVar3 = 0x61973e01;
  }
  else if (cVar1 == '\x01') {
    uVar3 = 0x3747f6d0;
  }
  else if (cVar1 == '\x02') {
    uVar3 = 0x6198e2ee;
  }
  FUN_00515c00(*(undefined4 *)(param_1 + 0x2c),0x4d156786);
  FUN_00515c00(*(undefined4 *)(param_1 + 0x30),uVar3);
  return;
}

