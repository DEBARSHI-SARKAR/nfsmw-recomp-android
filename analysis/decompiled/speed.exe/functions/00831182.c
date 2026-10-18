/* speed.exe 00831182 FUN_00831182; analysis pseudocode, not buildable source.
 * calls 00830eab FUN_00830eab
 */

undefined4 __fastcall FUN_00831182(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    (*(code *)puVar2[2])(param_1,puVar2[3]);
    puVar2 = puVar1;
  }
  FUN_00830eab();
  return 0;
}

