/* speed.exe 00865b00 FUN_00865b00; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000ed waveOutClose
 * calls EXTERNAL:000000f7 waveOutPrepareHeader
 * calls EXTERNAL:000000ec waveOutOpen
 */

uint FUN_00865b00(int *param_1,UINT param_2)

{
  HWAVEOUT hwo;
  MMRESULT MVar1;
  int iVar2;
  int *piVar3;
  HWAVEOUT local_18;
  WAVEFORMATEX local_14;
  
  local_14.wFormatTag = 1;
  local_14.nChannels = 1;
  local_14.nSamplesPerSec = 0x2b11;
  local_14.nAvgBytesPerSec = 0x5622;
  local_14.nBlockAlign = 2;
  local_14.wBitsPerSample = 0x10;
  local_14.cbSize = 0;
  local_18 = (HWAVEOUT)0x0;
  MVar1 = waveOutOpen(&local_18,param_2,&local_14,0,0,0);
  hwo = local_18;
  if (MVar1 != 0) {
    return 0xffffffff;
  }
  iVar2 = 0;
  piVar3 = param_1 + 6;
  do {
    ((LPWAVEHDR)(piVar3 + -1))->lpData = (LPSTR)(piVar3 + 7);
    *piVar3 = 0x8c0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    MVar1 = waveOutPrepareHeader(hwo,(LPWAVEHDR)(piVar3 + -1),0x20);
    if (MVar1 != 0) {
      waveOutClose(local_18);
      local_18 = (HWAVEOUT)0x0;
      goto LAB_00865bd1;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x238;
  } while (iVar2 < 2);
  param_1[3] = -1;
  param_1[1] = param_2;
  param_1[0x4e0] = 1;
LAB_00865bd1:
  *param_1 = (int)local_18;
  return (local_18 != (HWAVEOUT)0x0) - 1 & 0xfffffffe;
}

