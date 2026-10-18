/* speed.exe 0051cbf0 FUN_0051cbf0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0051cbf0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar2 + 0x60) = 0x969f96a5;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar2);
    }
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffd | 0x400000;
  }
  iVar2 = *(int *)(param_1 + 0x30);
  cVar1 = *(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x82 + DAT_0091ca24 * 0x14);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
    *(uint *)(iVar2 + 0x60) = (-(uint)(cVar1 != '\0') & 0xd09b4042) + 0x70dfe5c2;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar2);
    }
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffd | 0x400000;
  }
  return;
}

