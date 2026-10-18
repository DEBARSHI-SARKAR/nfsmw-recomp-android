/* speed.exe 007f0eac FUN_007f0eac; analysis pseudocode, not buildable source.
 */

uint FUN_007f0eac(int param_1,int param_2)

{
  if (param_2 == 0) {
    return (uint)*(ushort *)(param_1 + 0xe);
  }
  if (param_2 == 1) {
    return (uint)*(ushort *)(param_1 + 0xc);
  }
  if (param_2 == 2) {
    return *(uint *)(*(int *)(param_1 + 0x10 + (uint)*(ushort *)(param_1 + 0xe) * 4) + 0xc + param_1
                    );
  }
  if (param_2 != 3) {
    return 0;
  }
  return *(uint *)(param_1 + 8) & 1;
}

