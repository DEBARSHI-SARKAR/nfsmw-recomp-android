/* speed.exe 00834ad8 FUN_00834ad8; analysis pseudocode, not buildable source.
 */

undefined1 FUN_00834ad8(int param_1,int param_2)

{
  return *(undefined1 *)
          (param_2 * 3 + 0xc + ((uint)*(byte *)(param_1 + 6) * 2 + 3 & 0xfffffffc) + param_1);
}

