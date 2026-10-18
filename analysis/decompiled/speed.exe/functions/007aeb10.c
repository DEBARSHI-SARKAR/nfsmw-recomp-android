/* speed.exe 007aeb10 FUN_007aeb10; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_007aeb10(int param_1)

{
  undefined4 *puVar1;
  
  *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) & 0xffffffdf;
  puVar1 = &DAT_009b9e3c;
  do {
    thunk_FUN_007c7250(*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x9b9e48);
  if (*(undefined4 **)(param_1 + 0x1c0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c0))(1);
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  DAT_009b9e8c = 0;
  return;
}

