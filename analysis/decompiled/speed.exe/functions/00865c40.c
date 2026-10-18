/* speed.exe 00865c40 FUN_00865c40; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000e1 waveOutGetNumDevs
 * calls EXTERNAL:000000e0 waveOutGetDevCapsA
 */

void FUN_00865c40(int param_1)

{
  UINT UVar1;
  int iVar2;
  LPWAVEOUTCAPSA pwoc;
  UINT_PTR uDeviceID;
  
  UVar1 = waveOutGetNumDevs();
  uDeviceID = 0;
  iVar2 = 0;
  if ((int)UVar1 < 1) {
    *(undefined4 *)(param_1 + 0x1378) = 0;
    return;
  }
  pwoc = (LPWAVEOUTCAPSA)(param_1 + 0x11d8);
  do {
    if (7 < iVar2) {
      *(int *)(param_1 + 0x1378) = iVar2;
      return;
    }
    waveOutGetDevCapsA(uDeviceID,pwoc,0x34);
    if ((pwoc->dwFormats & 4) != 0) {
      iVar2 = iVar2 + 1;
      pwoc = pwoc + 1;
    }
    uDeviceID = uDeviceID + 1;
  } while ((int)uDeviceID < (int)UVar1);
  *(int *)(param_1 + 0x1378) = iVar2;
  return;
}

