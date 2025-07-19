import './App.css'
import { Layer, Rect, Stage } from 'react-konva'

import chroma from 'chroma-js';
import { TwitterShareButton, TwitterIcon } from 'react-share';
import { Stack } from '@mui/material';

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


        <TwitterShareButton title={title} url={url}>
          <TwitterIcon size={32} round={true} />
        </TwitterShareButton>
      </Stack>
    </>
  )
}

export default App
