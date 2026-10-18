/* speed.exe 004083e0 FUN_004083e0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004083e0(int param_1)

{
  if (*(undefined4 **)(param_1 + 0xb8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xb8))(1);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xc4) = DAT_0091ddbc;
    return;
  }
  *(undefined4 *)(param_1 + 0xc4) = DAT_0091ddbc;
  return;
}

