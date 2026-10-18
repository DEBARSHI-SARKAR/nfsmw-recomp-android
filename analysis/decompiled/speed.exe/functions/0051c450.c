/* speed.exe 0051c450 FUN_0051c450; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0051c450(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar2 + 0x60) = 0x9fa5ec9e;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar2);
    }
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffd | 0x400000;
  }
  cVar1 = *(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3c);
  uVar3 = 0;
  if (cVar1 == '\0') {
    uVar3 = 0xf75595f2;
  }
  else if (cVar1 == '\x01') {
    uVar3 = 0xf4b00e99;
  }
  else if (cVar1 == '\x02') {
    uVar3 = 0x70dfe5c2;
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar2 + 0x60) = uVar3;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar2);
    }
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffd | 0x400000;
  }
  return;
}

