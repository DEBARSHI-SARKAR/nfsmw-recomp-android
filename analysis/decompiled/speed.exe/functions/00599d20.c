/* speed.exe 00599d20 FUN_00599d20; analysis pseudocode, not buildable source.
 * calls 00590bd0 FUN_00590bd0
 * calls 00580d60 FUN_00580d60
 * calls 005812c0 FUN_005812c0
 */

undefined4 * __thiscall FUN_00599d20(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  iVar1 = FUN_005812c0(0xf0002);
  if (0x18 < iVar1) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)FUN_00590bd0(param_2,0xf0002);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined1 *)FUN_00580d60();
    if (puVar3 == (undefined1 *)0x0) {
      if (0x4b < *(byte *)(puVar2 + 4)) {
        uRam00000194 = 0xff;
        *puVar2 = 0xffffffff;
        return (undefined4 *)0x0;
      }
      *(undefined1 *)((uint)*(byte *)(puVar2 + 4) * 0x198 + param_1 + 0x1134) = 0xff;
      *puVar2 = 0xffffffff;
      return (undefined4 *)0x0;
    }
    *(undefined1 *)((int)puVar2 + 0x11) = *puVar3;
  }
  return puVar2;
}

