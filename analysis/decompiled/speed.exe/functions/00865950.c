/* speed.exe 00865950 FUN_00865950; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000f2 waveInOpen
 * calls EXTERNAL:000000f3 waveInClose
 * calls EXTERNAL:000000f6 waveInPrepareHeader
 */

uint FUN_00865950(int *param_1,UINT param_2)

{
  HWAVEIN hwi;
  MMRESULT MVar1;
  int iVar2;
  int *piVar3;
  HWAVEIN local_18;
  WAVEFORMATEX local_14;
  
  local_14.wFormatTag = 1;
  local_14.nChannels = 1;
  local_14.nSamplesPerSec = 0x2b11;
  local_14.nAvgBytesPerSec = 0x5622;
  local_14.nBlockAlign = 2;
  local_14.wBitsPerSample = 0x10;
  local_14.cbSize = 0;
  local_18 = (HWAVEIN)0x0;
  MVar1 = waveInOpen(&local_18,param_2,&local_14,0,0,0);
  hwi = local_18;
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
    MVar1 = waveInPrepareHeader(hwi,(LPWAVEHDR)(piVar3 + -1),0x20);
    if (MVar1 != 0) {
      waveInClose(local_18);
      local_18 = (HWAVEIN)0x0;
      goto LAB_00865a17;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x238;
  } while (iVar2 < 2);
  param_1[3] = -1;
  param_1[1] = param_2;
LAB_00865a17:
  *param_1 = (int)local_18;
  return (local_18 != (HWAVEIN)0x0) - 1 & 0xfffffffe;
}

