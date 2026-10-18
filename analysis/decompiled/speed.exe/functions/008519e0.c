/* speed.exe 008519e0 FUN_008519e0; analysis pseudocode, not buildable source.
 * calls 0083faa0 FUN_0083faa0
 * calls 0083fac0 FUN_0083fac0
 */

uint FUN_008519e0(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0x706f7274) {
    uVar1 = FUN_0083faa0(*(undefined2 *)(param_1 + 6));
    return uVar1 & 0xffff;
  }
  if (param_2 == 0x61646472) {
    uVar1 = FUN_0083fac0(*(undefined4 *)(param_1 + 8));
    return uVar1;
  }
  if (param_2 == 0x6c616472) {
    return *(uint *)(param_1 + 0x14);
  }
  if (param_2 == 0x6c707274) {
    return *(uint *)(param_1 + 0x18);
  }
  if (param_2 == 0x6f627566) {
    return *(int *)(param_1 + 100) - *(int *)(param_1 + 0x68);
  }
  if (param_2 == 0x69627566) {
    if (*(int *)(param_1 + 0x7c) != 0) {
      return *(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x78);
    }
  }
  else {
    if (param_2 == 0x73746174) {
      return *(uint *)(param_1 + 0x5c);
    }
    if (param_2 == 0x73656375) {
      return (int)*(short *)(param_1 + 0x8c);
    }
    if (param_2 == 0x63727970) {
      return *(uint *)(param_1 + 0xe4);
    }
  }
  return 0;
}

