/* speed.exe 00865a30 FUN_00865a30; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000f3 waveInClose
 * calls EXTERNAL:000000f1 waveInReset
 * calls EXTERNAL:000000f4 waveInUnprepareHeader
 */

void FUN_00865a30(undefined4 *param_1)

{
  HWAVEIN hwi;
  LPWAVEHDR pwh;
  int iVar1;
  
  if ((HWAVEIN)*param_1 != (HWAVEIN)0x0) {
    waveInReset((HWAVEIN)*param_1);
    hwi = (HWAVEIN)*param_1;
    pwh = (LPWAVEHDR)(param_1 + 5);
    iVar1 = 2;
    do {
      waveInUnprepareHeader(hwi,pwh,0x20);
      pwh = pwh + 0x47;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    waveInClose((HWAVEIN)*param_1);
    *param_1 = 0;
  }
  return;
}

