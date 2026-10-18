/* speed.exe 0083ea90 FUN_0083ea90; analysis pseudocode, not buildable source.
 */

uint FUN_0083ea90(int param_1,int param_2)

{
  if (param_2 == 0x686f7374) {
    return (uint)(*(int *)(param_1 + 0xac) == 0);
  }
  if (param_2 == 0x6a6f696e) {
    return (uint)(*(int *)(param_1 + 0xac) == 1);
  }
  if (param_2 == 0x686f6970) {
    return *(uint *)(param_1 + 0xb0);
  }
  if (param_2 == 0x68707274) {
    return *(uint *)(param_1 + 0xb4);
  }
  if (param_2 == 0x70656970) {
    return *(uint *)(param_1 + 0xb8);
  }
  if (param_2 == 0x70707274) {
    return *(uint *)(param_1 + 0xbc);
  }
  if (param_2 == 0x736f636b) {
    return *(uint *)(param_1 + 0xc0);
  }
  return 0;
}

