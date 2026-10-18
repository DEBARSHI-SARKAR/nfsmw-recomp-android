/* speed.exe 0051c3c0 FUN_0051c3c0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0051c3c0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar2 + 0x60) = 0x1e19173;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar2);
    }
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffd | 0x400000;
  }
  cVar1 = *(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b);
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
    *(uint *)(iVar2 + 0x60) = (-(uint)(cVar1 != '\0') & 0xb3999771) + 0xfbd74fc5;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar2);
    }
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffd | 0x400000;
  }
  return;
}

