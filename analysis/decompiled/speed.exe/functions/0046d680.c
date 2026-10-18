/* speed.exe 0046d680 FUN_0046d680; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

float10 FUN_0046d680(void)

{
  int iVar1;
  float local_94 [37];
  
  local_94[0] = 1.0;
  local_94[1] = 1.122462;
  local_94[2] = 1.2599211;
  local_94[3] = 1.4142135;
  local_94[4] = 1.587401;
  local_94[5] = 1.7817974;
  local_94[6] = 2.0;
  local_94[7] = 2.244924;
  local_94[8] = 2.5198421;
  local_94[9] = 2.828427;
  local_94[10] = 3.174802;
  local_94[0xb] = 3.5635948;
  local_94[0xc] = 4.0;
  local_94[0xd] = 4.489848;
  local_94[0xe] = 5.0396843;
  local_94[0xf] = 5.656854;
  local_94[0x10] = 6.349604;
  local_94[0x11] = 7.1271896;
  local_94[0x12] = 8.0;
  local_94[0x13] = 8.979696;
  local_94[0x14] = 10.079369;
  local_94[0x15] = 11.313708;
  local_94[0x16] = 12.699208;
  local_94[0x17] = 14.254379;
  local_94[0x18] = 16.0;
  local_94[0x19] = 17.959393;
  local_94[0x1a] = 20.158737;
  local_94[0x1b] = 22.627417;
  local_94[0x1c] = 25.398417;
  local_94[0x1d] = 28.508759;
  local_94[0x1e] = 32.0;
  local_94[0x1f] = 35.918785;
  local_94[0x20] = 40.317474;
  local_94[0x21] = 45.254833;
  local_94[0x22] = 50.796833;
  local_94[0x23] = 57.017517;
  local_94[0x24] = 64.0;
  iVar1 = FUN_007c4b80();
  if (iVar1 < 1) {
    return (float10)local_94[0];
  }
  if (0x24 < iVar1) {
    iVar1 = 0x24;
  }
  return (float10)local_94[iVar1];
}

