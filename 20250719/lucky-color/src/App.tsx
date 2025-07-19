import './App.css'
import { Layer, Rect, Stage } from 'react-konva'

import chroma from 'chroma-js';
import { TwitterShareButton, TwitterIcon } from 'react-share';
import { Button, Stack } from '@mui/material';

function App() {
  const stageBand = window.innerWidth / 2;
  const randomColor = chroma.random().hex()
  const title = `今日のラッキーカラーは、${randomColor} です。`;
  const url = 'http://localhost:3000';

  return (
    <>
      <Stack spacing={2}>
        <Stage height={stageBand} width={stageBand}>
          <Layer>
            <Rect x={0} y={0} width={stageBand} height={stageBand} fill={randomColor} />
          </Layer>
        </Stage >


        <Stack direction={'row'} spacing={2}>
          <Button variant='outlined' >DOWNLOAD ME</Button>
          <TwitterShareButton title={title} url={url}>
            <TwitterIcon size={32} round={true} />
          </TwitterShareButton>
        </Stack>
      </Stack>
    </>
  )
}

export default App
