/* speed.exe 00606490 FUN_00606490; analysis pseudocode, not buildable source.
 */

bool __fastcall FUN_00606490(undefined4 param_1,int param_2)

{
  uint uVar1;
  int in_EAX;
  uint uVar2;
  
  uVar1 = *(uint *)(*(int *)(in_EAX + 0xc) + 4 + param_2 * 4);
  uVar2 = uVar1 & 0x3f;
  if (0x18 < uVar2) {
    if (uVar2 < 0x1c) {
      return (uVar1 & 0xff8000) == 0;
    }
    if (uVar2 == 0x20) {
      return true;
    }
  }
  return false;
}

