/* speed.exe 00865bf0 FUN_00865bf0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000ed waveOutClose
 * calls EXTERNAL:000000f5 waveOutUnprepareHeader
 * calls EXTERNAL:000000eb waveOutReset
 */

void FUN_00865bf0(undefined4 *param_1)

{
  HWAVEOUT hwo;
  LPWAVEHDR pwh;
  int iVar1;
  
  if ((HWAVEOUT)*param_1 != (HWAVEOUT)0x0) {
    waveOutReset((HWAVEOUT)*param_1);
    hwo = (HWAVEOUT)*param_1;
    pwh = (LPWAVEHDR)(param_1 + 5);
    iVar1 = 2;
    do {
      waveOutUnprepareHeader(hwo,pwh,0x20);
      pwh = pwh + 0x47;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    waveOutClose((HWAVEOUT)*param_1);
    *param_1 = 0;
  }
  return;
}

