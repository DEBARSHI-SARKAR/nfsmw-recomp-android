/* speed.exe 006ff9e0 FUN_006ff9e0; analysis pseudocode, not buildable source.
 * calls 004cd570 FUN_004cd570
 * calls 004eb7d0 FUN_004eb7d0
 */

void __fastcall FUN_006ff9e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x98);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(char *)(puVar1 + 8) == '\0') {
      (**(code **)*puVar1)(1);
      *(undefined4 *)(param_1 + 0x98) = 0;
      return;
    }
    uVar2 = FUN_004eb7d0(0xd,0);
    *(undefined4 *)(param_1 + 0xa0) = uVar2;
    FUN_004cd570(param_1 + 0x9c);
  }
  return;
}

