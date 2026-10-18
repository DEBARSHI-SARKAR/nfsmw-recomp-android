/* speed.exe 0050af20 FUN_0050af20; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 005094c0 FUN_005094c0
 * calls 006c6770 FUN_006c6770
 */

void __fastcall FUN_0050af20(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x378);
  while (puVar2 != (undefined4 *)(param_1 + 0x378)) {
    puVar1 = (undefined4 *)*puVar2;
    if ((*(byte *)(puVar2 + 6) & 2) == 0) {
      FUN_005094c0();
      FUN_00463ca0(DAT_00916068,puVar2);
      puVar2 = puVar1;
    }
  }
  FUN_006c6770(0,0x400,0,0x2e,DAT_00916a54,500,DAT_00916a50,200);
  return;
}

