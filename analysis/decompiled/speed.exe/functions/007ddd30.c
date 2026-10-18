/* speed.exe 007ddd30 ___crtInitCritSecNoSpinCount@8; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000080 InitializeCriticalSection
 */

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2003 Debug */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}

