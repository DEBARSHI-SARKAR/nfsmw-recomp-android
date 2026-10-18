/* speed.exe 007e9890 FUN_007e9890; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007e9890(uint *param_1,int param_2)

{
  *param_1 = ((param_2 != 1) - 1 & 0x8000) << 8 | *param_1 & 0xff7fffff;
  return;
}

